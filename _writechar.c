#include <unistd.h>

/**
 * _write_char - writes a character fron ASCII to standard output
 * @c: character from ASCII
 * Return: 1 when succeed otherwise -1 when error
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
