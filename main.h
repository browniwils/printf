#ifndef MAIN_H
#define MAIN_H

#include <unstd.h>
#include <stdio.h>

/* MACROS */
#define BASE_TEN 10

/* WRITE CHARACTER FUNCTION */
int _write_char(char c);

/* REGULAR FUNCTIONS */
int print_char(char c);
int print_decimal(int n);
int print_string(char *s);

/* SPECIFIER FUNCTIONS */
int get_format_prefix_sign(char *s, *i);
int get_format_width(char *s, *i);



#endif
