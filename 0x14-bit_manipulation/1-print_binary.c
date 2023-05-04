#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary equivalent of a decimal number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i, amount = 0;
	unsigned long int present;

	for (i = 63; i >= 0; i--)
	{
		present = n >> i;

		if (present & 1)
		{
			_putchar('1');
			amount++;
		}
		else if (amount)
			_putchar('0');
	}
	if (!amount)
		_putchar('0');
}
