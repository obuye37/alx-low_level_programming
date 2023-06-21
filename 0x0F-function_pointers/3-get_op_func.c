#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - selects correct operator function
 * @s: string operator entered by user
 * Return: the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t opArr[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i = 0;

	while (opArr[i].op != NULL && *(opArr[i].op) != *s)
		i++;

	return (opArr[i].f);
}
