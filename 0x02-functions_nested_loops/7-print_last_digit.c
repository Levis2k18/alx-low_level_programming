#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @n:  is the int that will use for the argument of the function
 * Return: the last digit
 */
int print_last_digit(int n)

{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar (x + '0');
	return (x);
}
