#include <stdio.h>

/**
 * main - prime numbers
 *
 * Return: Always 0.
 */

int main(void)
{
	long int y = 612852475143;
	long int z;

	for (z = 2; z < y; z++)
	{
		if (y % z == 0)
		{
			y = y / z;
		}
	}
	printf("%ld\n", z);
	return (0);
}
