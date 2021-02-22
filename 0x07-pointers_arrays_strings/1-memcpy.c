#include "holberton.h"
/**
 *_memcpy - copies memory area
 *
 *@dest:destination
 *@src:source
 *@n:no. of bytes
 *Return:pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
