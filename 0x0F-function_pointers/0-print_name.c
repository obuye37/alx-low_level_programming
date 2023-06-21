#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name to std
 * @name: name to print
 * @f: function to do the task
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
