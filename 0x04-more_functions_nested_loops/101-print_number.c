#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return:void
 */

void print_number(int n)
{

	unsigned int g = 0;

	if  (n < 0)
	{
		g = -n;
		_putchar('-');
	}

	else
	{
		g = n;
	}

	if (g / 10)
	{
		print_number(g / 10);
	}

	_putchar((g % 10) + '0');
}
