#include "holberton.h"

/**
 * print_int - prints an integer number
 *
 *
 */
int print_i(va_list list)
{
	int n = va_arg(list, int);
	int i = 0;

	_printihelp(n);
	
	if (n == 0)
		i++;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

/**
 * print_char - prints a character
 *
 *
 */
int print_c(va_list list)
{
	char c = va_arg(list, int);

	if (!c)
		c = ' ';
	_putchar(c);
	return (1);
}

/**
 * print_string - prints a string
 *
 *
 */

int print_s(va_list list)
{
	int i = 0;
	int sum = 0;
	char *s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i])
	{
		_putchar(s[i]);
		i++, sum++;
	}
	return (sum);
}
/**
 *
 *
 */
int print_p(va_list list)
{
	(void) list;
	_putchar('%');
	return (1);
}
