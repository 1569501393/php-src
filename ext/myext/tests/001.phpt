--TEST--
Check if myext is loaded
--EXTENSIONS--
myext
--FILE--
<?php
echo 'The extension "myext" is available';
?>
--EXPECT--
The extension "myext" is available
