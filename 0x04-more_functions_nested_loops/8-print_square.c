#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int i = 0, l;

	while (i < n && n > 0)
	{
		l = 0;
		while (l < n)
		{
			_putchar('#');
			l++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
