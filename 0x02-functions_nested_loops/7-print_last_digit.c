#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)

{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar (x + '0');
	return (x);
}
