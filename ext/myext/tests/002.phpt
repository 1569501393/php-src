--TEST--
test1() Basic test
--EXTENSIONS--
myext
--FILE--
<?php
$ret = test1();

var_dump($ret);
?>
--EXPECT--
The extension myext is loaded and working!
NULL
