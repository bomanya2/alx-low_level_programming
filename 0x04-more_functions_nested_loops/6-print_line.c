#include "main.h"
/**
 *print_line-prints a line on the console.
 *@n:length of the line.
 *
 *Return:void
 */




void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
