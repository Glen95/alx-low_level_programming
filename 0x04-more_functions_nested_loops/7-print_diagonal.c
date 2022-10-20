#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int column, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1; column <= n; column++)
		{
			for (space = 1; space < column; space++)
			{
				_putchar(' ');
			}
			-putchar('\\');
			_putchar('\n');
		}
	}
}
