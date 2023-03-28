#include "main.h"

/**
 * print_char - print a character
 * @c: character to be printed
 * Return: 1 for success otherwise 0
 */

int print_char(char c)
{
	int i;

	i = _write_char(c);
	if (i == 1)
	{
		return (i);
	}
	return (0);
}
