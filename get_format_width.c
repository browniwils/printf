#include "main.h"

/**
 * get_format_width - finds the width of specifier
 * @s: string to search for width
 * @i: start index for searching
 * Return: size of with in a positive integer otherwise NULL
 */

int get_format_width(char *s, int *i)
{
	int _index, size;
	char *width;

	for (_index = i + 1; s[_index] != '\0'; _index++)
	{
		if (s[_index] <= '0' || s[_index] >= '9')
		{
			width[_index - i - 1] = s[_index];
		}
		else
		{
			return (NULL);
		}
	}
	size = _atoi(width);
	return (size);
}
