#include "main.h"

/**
 * print_alphabet - Print the alphabet, in lowercase, followed by new line.
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++
	}

	_putchar('\n');
}
