#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int space, row, triangle;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (space = 0; space < (size - 1) - row; space++)
			{
				_putchar(' ');
			}
			for (triangle = 0; triangle <= row; triangle++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
