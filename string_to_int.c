#include "main.h"

/**
 * convert_string_to_int - converts string to integer
 * @s: string for conversion
 * Return: converted integer otherwise NULL
 */

int convert_string_to_int(char *s)
{
	int i = 0, num = 0, del = 0, len = 0, flag = 0, digit = 0;

	while (s[len] != 0)
	{
		len++;
	}
	for (i = 0; i < len && flag == 0; i++)
	{
		if (s[i] == '-')
		{
			++del;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
			{
				digit = -digit;
			}
			n = n * 10 + digit;
			flag = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			flag = 0;
		}
	}
	if (flag == 0)
	{
		return (0);
	}
	return (n);
}
