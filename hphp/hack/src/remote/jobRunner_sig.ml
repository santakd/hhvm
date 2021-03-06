(*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

open Core_kernel

module Types = struct
  type job_id = int [@@deriving show, eq]
end

module type S = sig
  include module type of Types

  type command

  type status [@@deriving show]

  (* Note on the nonce parameter: it is up to the caller to specify a nonce that
    results in the desired behavior, such as grouping multiple commands together.
    It can be used later in `begin_cancel` to cancel a group of commands, for example. *)
  val create_command :
    nonce:Int64.t ->
    key:string ->
    hash:string ->
    check_id:string ->
    transport_channel:string option ->
    file_system_mode:string ->
    root:string ->
    min_log_level:Hh_logger.Level.t ->
    version_specifier:string option ->
    eden:bool ->
    command

  val is_alive : status -> bool

  (* Cancels a group of running commands using the nonce they were created with. *)
  val begin_cancel : Int64.t -> (status, string) result Future.t

  val begin_heartbeat : job_id -> (status, string) result Future.t

  val begin_run :
    command:command -> root:string -> (job_id, string) result Future.t

  val run : command:command -> root:string -> (job_id, string) result
end
