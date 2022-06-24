#include "main.h"
#include <string.h>

/**
* reverse_array -> reversing an array
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;

	for (i = 0; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
