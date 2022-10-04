#include "main.h"
/**
 * _abs - calculate absolute value of n.
 * @n: The number of which the sign will be printed.
 *_putchar -print character
 * Return: absolute value of the given value.
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1 * n);
}
}
