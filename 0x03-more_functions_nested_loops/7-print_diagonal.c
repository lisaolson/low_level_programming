#include "clo.h"

/**
 * print_diagonal - draw diagonal line
 * @n: First int
 * Return: Always 0.
 */
void print_diagonal(int n)
{

int a;

int b;
	a = 0;
	while (a < n)
	{
		b = 0;
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (n <= 0)
		_putchar('\n');
}
