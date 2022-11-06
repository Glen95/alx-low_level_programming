#include "main.h"

/**
 * _memcpy - copies memort area frm src to dest n amount of times
 * @dest: pointer that will receive the copied data
 * @src: pointer that ha the information to be copied
 * @n: amount of times the src information will be copied to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
