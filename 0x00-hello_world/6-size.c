#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	printf("The size of an char is: %d byte(s)\n", sizeof(char));
	printf("The size of a int is: %d byte(s)\n", sizeof(int));
	printf("The size of a long int is: %d byte(s)\n", sizeof(long int));
	printf("The size of a long long int is: %d byte(s)\n", sizeof(long long int));
	printf("The size of a float is: %d byte(s)\n", sizeof(float));

	return(0);
}
