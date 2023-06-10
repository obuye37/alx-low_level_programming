#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */

void _puts(char *str)
{
	int idx;

	for (idx = 0; str[idx] != '\0'; idx++)
	{
		_putchar(str[idx]);
	}
	_putchar('\n');
}
