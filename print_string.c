#include "main.h"

/**
 * print_string - prints series of characters
 * @s: pointer to series of characters
 * Return: always 1
 */

int print_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_write_char(s[i])
	}
	return (1);
}
