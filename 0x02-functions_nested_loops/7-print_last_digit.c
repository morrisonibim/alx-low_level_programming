#include "main.h"

/**
 * print_last_digit - print_last_digit
 *
 * @a: number as int
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
	int m;

	m = a % 10;

	if (m < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
