#include "main.h"
/**
 * printnum - funct for counting
 * @n: number added recursively
 * Return: void
 */
int printnum(int n)
{
	int count = 0;
	unsigned int num;
	unsigned int dig;
	unsigned int i;
	unsigned int len_num;

	len_num = n;
	if (n < 0)
	{
		count++;
		len_num = len_num * -1;
		_putchar('-');
	}
	if (len_num == 0)
	{
		count++;
		_putchar('0');
		return (count);
	}
	i = 1;
	while (((len_num / i) > 9))
	{
		i = i * 10;
	}
	while (i > 0)
	{
		num = len_num / i;
		dig = num % 10;
		count++;
		_putchar(dig + '0');
		i = (i / 10);
	}
	return (count);
}

/**
 * print_d - prints numbers. Integers and deecimals
 * @list: list the num
 * Return: a number
 */

int print_d(va_list list)
{
	int output;
	int count;

	output = va_arg(list, int);
	count  = printnum(output);
	return (count);
}

/**
 * print_r - prints a reversed str
 * @list: list
 * Return: stuff!
 */

int print_r(va_list list)
{
	char *str = "%r";
	int len = _strlen(str);

	write(1, str, len);
	va_end(list);
	return (len);
}

