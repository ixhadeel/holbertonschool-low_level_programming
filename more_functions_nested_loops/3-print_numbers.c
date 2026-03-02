#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i); /* المرة الأولى لاستخدام _putchar */
	}
	_putchar('\n'); /* المرة الثانية لاستخدام _putchar */
}
