#include "main.h"

/**
 * print_decimal - print decimal numbers (in base 10)
 * @n: integer to print decimal from
 * Return: always 1
 */

int print_decimal(int n)
{
	int i, j;

	for (i = 0; i < BASE_TEN; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j > (BASE_TEN - 1))
			{
				_write_char((j / BASE_TEN) + '0');
			}
			_write_char((j % BASE_TEN) + '0');
		}
	}
	return (1);
}
