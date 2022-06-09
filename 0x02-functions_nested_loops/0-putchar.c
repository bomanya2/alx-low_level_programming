#include "main.h"

/**
 * main - Print "alx" followed by a new line.
 * Return: 0
 */

int main(void)
{
	char name[] = "alx";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(name[i]);
	}

	_putchar('\n');

	return (0);
}
