<<<<<<< HEAD
#ifndef _LIBRARIES_
#define _LIBRARIES_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#endif
=======
#ifndef MAIN_H
#define MAIN_H

#include <stdout.h>
#include "main.h"
>>>>>>> 257e240970392c44c3373a422ca8567fa5ea4409

#ifndef _MAIN_
#define _MAIN_H_

/**
 *struct functions - Struct of formats and functions
 *@lf: For letter format
 *@f: function print someting.
 */
typedef struct functions
{
	char *lf;
	int (*f)(va_list selector);
} prin;
int _printf(const char *format, ...);
<<<<<<< HEAD
int print_numd(va_list selector);
int _char(va_list selector);
int _str(va_list selector);
int print_number(va_list selector);
int print_unsigned(va_list selector);
#endif
=======

#endif
>>>>>>> 257e240970392c44c3373a422ca8567fa5ea4409
