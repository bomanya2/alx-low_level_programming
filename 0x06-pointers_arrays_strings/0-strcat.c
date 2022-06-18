#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strcat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that will be concatenated to @des.
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
        int len = 0, i;
	while (dest[len])
		len++;

	for (i = 0; src[i] !='0'; i++)
	{
		dest[len] = src[i];
		len += 1
	}
	dest[len] = '\0';
	retun(dest);
}

