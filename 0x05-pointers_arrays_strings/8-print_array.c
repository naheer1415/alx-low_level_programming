#include "main.h"
#include <stdio.h>

/**
 * print_arrar - Print n element of an array of integer
 * @a: Array of integer
 * @n: Number of element of an array of integer
 * :Return: void
 */

void print_array(int *a, int n)

{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");

}
