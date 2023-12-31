#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_binary - prints an unsigned int in binary form
 *
 * @args: list of arguments
 *
 * Return: number of characters printed
 */

int print_binary(va_list args)
{
	int count = 0;
	unsigned int n = va_arg(args, unsigned int);
	int bin_digits[32];
	int i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		bin_digits[count++] = n % 2;
		n = n / 2;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar('0' + bin_digits[i]);
	}

	return (count);
}

/**
 * print_unsigned - prints an unsigned integer
 *
 * @args: list of arguments
 *
 * Return: number of characters printed
 */

int print_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	int digits[32];
	int i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		int digit = n % 10;

		digits[count++] = digit;
		n = n / 10;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar('0' + digits[i]);
	}

	return (count);
}

/**
 * print_octal - prints an unsigned int in octal form
 *
 * @args: list of arguments
 *
 * Return: number of characters printed
 */

int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	int digits[32];
	int i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		int digit = n % 8;

		digits[count++] = digit;
		n = n / 8;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar('0' + digits[i]);
	}

	return (count);
}

/**
 * print_hexadecimal - prints an unsigned int in hexadecimal form
 *
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_hexadecimal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	int digits[32];
	int i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		int digit = n % 16;

		if (digit < 10)
			digits[count++] = '0' + digit;
		else
			digits[count++] = 'a' + digit - 10;
		n = n / 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(digits[i]);
	}

	return (count);
}

/**
 * print_hexadecimal_upper - prints an unsigned int in hexadecimal form
 *
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_hexadecimal_upper(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;
	int digits[32];
	int i;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		int digit = n % 16;

		if (digit < 10)
			digits[count++] = digit;
		else
			digits[count++] = digit + 55;
		n = n / 16;
	}

	for (i = count - 1; i >= 0; i--)
	{
		if (digits[i] < 10)
			_putchar('0' + digits[i]);
		else
			_putchar(digits[i]);
	}

	return (count);
}
