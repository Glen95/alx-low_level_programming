#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: The number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld;

	ld = (ld % 10);

	if (ld < 10)
	{
		ld = (-1 * ld);
	}

	_putchar(ld + '0');
	return (ld);
}
