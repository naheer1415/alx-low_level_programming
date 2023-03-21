#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet lowercase and uppercase
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 97)
	{
		putchar(n);
		n++;
	}
	while (m <= 65)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
