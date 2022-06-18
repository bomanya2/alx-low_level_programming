#include "MAIN_H"
/**
 * _strcat-concatenates a string.
 * @dest:destination string.
 * @src:source string.
 *
 * Return:Pointer to the concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i, m;
/*Get the size of the destination string.*/
	for (i =0; dest[i] != '\0'; i++)
		;
	for (m =0; src[m] != '\0' ; m++)
	{
		dest[i] = src[m];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

