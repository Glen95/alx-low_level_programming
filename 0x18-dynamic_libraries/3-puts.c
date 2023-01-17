#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: pointer type vhar
 * Return: Always 0 (success)
 */
void _puts(char *str)
{
	for (; *str != '\0';)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
