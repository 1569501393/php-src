WHAT IT IS

  It's a tool for automatically creating the basic framework for a PHP extension.

HOW TO USE IT

  Very simple. First, change to the ext/ directory of the PHP sources. Then run
  the following

    php ext_skel.php --ext extension_name

  and everything you need will be placed in directory ext/extension_name.

  If you don't need to test the existence of any external header files,
  libraries or functions in them, the extension is ready to be compiled in PHP.
  To compile the extension run the following:

    cd extension_name
    phpize
    ./configure
    make

  Don't forget to run tests once the compilation is done:

    make test

  Alternatively, to compile extension in the PHP:

    cd /path/to/php-src
    ./buildconf
    ./configure --enable-extension_name
    make
    make test TESTS=ext/extension_name/tests

  The definition of PHP_extension_NAME_VERSION will be present in the
  php_extension_name.h and injected into the zend_extension_entry definition.
  This is required by the PECL website for the version string conformity checks
  against package.xml

SOURCE AND HEADER FILE NAME

  The ext_skel.php script generates 'extension_name.c' and 'php_extension_name.h'
  as the main source and header files. Keep these names.

  extension functions (User functions) must be named

  extension_name_function()

  When you need to expose extension functions to other extensions, expose
  functions strictly needed by others. Exposed internal function must be named

  php_extension_name_function()

  See also CODING_STANDARDS.md.

OPTIONS

  php ext_skel.php --ext <name> [--experimental] [--author <name>]
                   [--dir <path>] [--std] [--onlyunix]
                   [--onlywindows] [--help]

  --ext <name>          The name of the extension defined as <name>
  --experimental        Passed if this extension is experimental, this creates
                        the EXPERIMENTAL file in the root of the extension
  --author <name>       Your name, this is used if --std is passed and for the
                        CREDITS file
  --dir <path>          Path to the directory for where extension should be
                        created. Defaults to the directory of where this script
                        lives
  --std                 If passed, the standard header used in extensions that
                        is included in the core, will be used
  --onlyunix            Only generate configure scripts for Unix
  --onlywindows         Only generate configure scripts for Windows
  --help                This help
