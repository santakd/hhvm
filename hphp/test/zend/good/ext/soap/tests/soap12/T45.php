<?hh
<<__EntryPoint>>
function entrypoint_T45(): void {
  $GLOBALS['HTTP_RAW_POST_DATA'] = <<<EOF
<?xml version="1.0"?>
<env:Envelope xmlns:env="http://www.w3.org/2003/05/soap-envelope"
              xmlns:xsd="http://www.w3.org/2001/XMLSchema"
              xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance">
  <env:Body>
    <test:echoNestedStruct xmlns:test="http://example.org/ts-tests"
        env:encodingStyle="http://www.w3.org/2003/05/soap-encoding">
      <inputStruct xsi:type="ns1:SOAPStructStruct"
                    xmlns:ns1="http://example.org/ts-tests/xsd">
        <varInt xsi:type="xsd:int">42</varInt>
        <varFloat xsi:type="xsd:float">0.005</varFloat>
        <varString xsi:type="xsd:string">hello world</varString>
        <varStruct xsi:type="ns1:SOAPStruct">
          <varInt xsi:type="xsd:int">99</varInt>
          <varFloat xsi:type="xsd:float">5.5</varFloat>
          <varString xsi:type="xsd:string">nested struct</varString>
        </varStruct>
      </inputStruct>
    </test:echoNestedStruct>
  </env:Body>
</env:Envelope>
EOF;
  include "soap12-test.inc";
  test();
}
