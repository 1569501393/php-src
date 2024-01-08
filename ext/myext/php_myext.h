/* myext extension for PHP */

#ifndef PHP_MYEXT_H
# define PHP_MYEXT_H

extern zend_module_entry myext_module_entry;
# define phpext_myext_ptr &myext_module_entry

# define PHP_MYEXT_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_MYEXT)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_MYEXT_H */
