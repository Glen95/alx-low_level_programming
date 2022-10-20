#include "main.h"

/**
 * _isdigit - a function that checks for uppercase character
 * @c: input
 * Return: 1 if c is a uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
