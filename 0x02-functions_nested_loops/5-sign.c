#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: integer argument
 * Return: 1, 0, -1 based on condition
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
