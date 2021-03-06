#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string printed between numbers
 * @n: number of integers passed to function
 * Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			if (i == 0)
			{
				printf("%d", va_arg(ap, int));
			}
			else
			{
				printf("%s%d", separator,  va_arg(ap, int));
			}
		}
	}
	printf("\n");
	va_end(ap);
}
