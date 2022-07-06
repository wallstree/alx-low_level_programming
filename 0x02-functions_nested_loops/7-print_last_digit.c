#include "main.h"
/**
 *  print_last_digit - calculate absolute value of n.
 * @n: The number of which the sign will be printed.
 *_putchar -print character
 * Return: last digit.
 */
int print_last_digit(int n)
{
int m;
m = n % 10;
if (m < 0)
m *= -1;
_putchar(m + '0');
return (m);
}
