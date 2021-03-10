#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *main - calculates the result of two integers based on the operand
 *
 *@ac:arg count
 *@av:arguement vector
 *Return:int
 */
int main(int ac, char *av[])
{
	register int num1, num2;

	int (*funptr)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	funptr = get_op_func(av[2]);
	if (!funptr)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	printf("%i", funptr(num1, num2));
	return (0);
}
