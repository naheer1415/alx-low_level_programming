#include "main.h"
/**
 * print_last_digt - print the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit number
 */

int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}

