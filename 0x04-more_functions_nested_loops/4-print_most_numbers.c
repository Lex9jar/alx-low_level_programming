#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 - 9,
 * except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}
}
