#include "main.h"

/**
 *more_numbers-print 0-14 ten times.
 *
 *Return:void.
 */


void more_numbers(void)
{
	int i, j, k, m = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			k = j % 10;
			if (j >= 10)
			{
				k = 1;
			}
			_putchar(k + '0');
			if (j > 9)
			{
				_putchar(m + '0');
				m++;
				m = m % 10;
			}
		}
		m = 0;
		_putchar('\n');
	}
}
