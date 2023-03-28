#include <stdio.h>

/**
 * swap_int - Swap the value of two integers.
 * @a: The first value to be swapped
 * @b: The second value to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* the function that swap the value of the integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
