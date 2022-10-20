#include <stdio.h>
/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%1i\n",  num);
	return (0);
}
}
