#include <stdio.h>
/**
 *print_name - calls another function to peint a name
 *
 *@name:name to print
 *@f:function name
 *
 *Return:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (*name)
	{
		(*f)(name);
	}
}
