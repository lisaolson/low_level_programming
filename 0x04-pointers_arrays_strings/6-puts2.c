#include "clo.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: pointer variable
 * Return: Always 0.
 */
void puts2(char *str)
{
int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
