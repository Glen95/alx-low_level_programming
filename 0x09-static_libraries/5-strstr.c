#include "main.h"

/**
 * _strstr - locates a substring within a string
 * @haystack: pointer that contains the address of the string to be evaluated
 * @needle: pointer that contains the string to evaluate @haystack
 * Return: address of the located string in @haystack if no substring is found
 * then retun NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int f = 0;
	int a;
	int compare = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (haystack[i] != 0)
	{
		f = 0;
		a = i;
		while (needle[f] != 0)
		{
			if (needle[f] == haystack[a])
			{
				compare = 1;
			}
			else
			{
				compare = 0;
				break;
			}
			f++;
			a++;
		}
		if (compare == 1)
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
