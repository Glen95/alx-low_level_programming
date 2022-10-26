#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int lengthD = 0; /* string length for src */
	int lengthS = 0; /* string length for dest */

	while (*(dest + lengthD) != '\0')
		lengthD++;

	while (*(src + lengthS) != '\0' && lengthD < 97 && lengthS < n)
	{
		*(dest + lengthD) = *(src + lengthS);
		lengthD++;
		lengthS++;
	}
	*(dest + lengthD) = '\0';
	return (dest);
}
