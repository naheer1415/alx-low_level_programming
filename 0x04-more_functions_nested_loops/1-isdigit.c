#include "main.h"

/**
 * _isdigit - Check if a charcater is digit
 * @x: The number to be checked
 * Return: 1 for a charcater and 0 for any other thing
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
