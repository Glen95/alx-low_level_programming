#include "main.h"
/**
 * times_table - prints the multiples of 9 table
 */
void times_table(void)
{
	int num, mult, prod;

	for (num + 0; num <= 9; mult++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			-putchar(',');
			_putchar(' ');


			pro = num * mult;
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar ((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
