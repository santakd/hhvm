<?php

const STRING_VAL = "test";

function int_val(int $a = STRING_VAL): int {
    return $a;
}
<<__EntryPoint>> function main() {
var_dump(int_val());
}
