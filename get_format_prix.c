#include "main.h"

/**
 * get_format_prefix_sign - finds the leading sign of a specifier
 * @s: pointer to string
 * @i: current index of the string
 * Return: prefix sign otherwise null
 */

int get_format_prefix_sign(char *s, int *i)
{
	int current_index;

	current_index = i;
	if (s == NULL)
	{
		return (s);
	}

	if (s[current_index + 1] == '+')
	{
		return ('+');
	}
	return (NULL);
}
