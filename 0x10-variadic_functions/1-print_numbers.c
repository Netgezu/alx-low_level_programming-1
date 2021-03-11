#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_numbers - prints numbers followed by newline
 *
 *@separator:string to be printed b2n no.
 *
 *@n:no. of elements
 *
 *Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i = 0;

	if (separator == NULL)
		separator = "";
	va_start(va, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(va, int), separator);
	}
	printf("%d\n", va_arg(va, int));
	va_end(va);
}
