#include "main.h"
/**
 * char *_strcpy - a function that copies the string poined by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = *src;
	return (d);
}
