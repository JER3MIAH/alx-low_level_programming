#include "main.h"

/**
 * main - this function returns a script
 *
 * Return: Always 0
 */

void _puts_recursion(char *s)
{

	if(*s)
	{
		putchar(*s);
	}
	else
	{
		putchar('\n');
	}
