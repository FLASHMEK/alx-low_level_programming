#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 *_memcpy - compy memory area
 * @dest: stored memory
 * @src: memory to copy
 * @n: bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int z = 0;
	int p = n;

	for (;z < p; z++)
	{
		dest[z] = src[z];

		n--;
	}
	return (dest);
}
