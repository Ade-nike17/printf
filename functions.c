#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_string - writes a null terminated string to the output stream
 * @args: list of arguments
 *
 * Return: mumber of characters printed
 */

int print_string(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}


/**
 * print_char - function prints a single character
 *
 * @args: list of arguments
 * Return: number of characters printed
 */

/* writes a single char to the output stream */

int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}

/**
 * print_percent - prints only percentage
 *
 * @args: list of arguments
 *
 * Return: character printed
 */

int print_percent(__attribute__((unused)) va_list args)
{
	return (_putchar('%'));
}

/**
 * print_int - prints an integer
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n, count = 0;

	n = va_arg(args, int);
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	count += print_number(n);

	return (count);
}


/**
 * print_number - prints an integer number
 * @num: numbers to print as an integer
 *
 * Return: count of nums printed
 */

int print_number(int num)
{
	int count = 0;

	if (num / 10 != 0)
	{
		count += print_number(num / 10);
	}
	_putchar(num % 10 + '0');
	count++;

	return (count);
}

