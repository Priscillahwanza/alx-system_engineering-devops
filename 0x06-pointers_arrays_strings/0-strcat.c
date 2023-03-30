#include "main.h"
/**
 * _strcat - concatenates two strings
 * This function appends the src string to the dest string
 * overwriting the terminating null byte (\0) at the end of dest
 * and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = sizeof(src);
	int d_len = 0;

	while (dest[d_len] != '\0')
	{
		d_len++;
	}

	for (i = 0; i < j && src[i] != '\0'; i++)
	{
		dest[d_len + i] = src[i];
	}

	dest[d_len + i] = '\0';

	return (dest);
}
