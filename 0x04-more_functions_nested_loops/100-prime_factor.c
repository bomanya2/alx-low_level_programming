#include <stdio.h>

/**
 * main  - prints the largest prime factor of the number 612852475143
 *
 *
 *
 * Return: 0 on success
 */
int main(void)
{
	long number  = 612852475143;
	long prime = 2;

	while (prime <= number)
	{
		if (number % prime != 0)
			prime++;
		else
			number = number / prime;
	}
	printf("%lu\n", prime);
	return (0);
}
