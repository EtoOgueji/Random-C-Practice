#include <stdio.h>
/**
 * print_sign - Print the sign of a number
 * @n: type int integer, can be negative or positive
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if +, 0 if 0, and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}