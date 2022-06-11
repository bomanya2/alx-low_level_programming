#include "main.h"
/**
 *print_diagonal-prints a diagnal line on the console.
 *@n:length of diagonal.
 *
 *Return:void.
 */

void print_diagonal(int n)
{

	int  m, p;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			for (p = 0; p < m; p++)
			{
			_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
