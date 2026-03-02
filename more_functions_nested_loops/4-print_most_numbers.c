#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * excluding 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i); /* المرة الأولى لاستخدام _putchar */
		}
	}
	_putchar('\n'); /* المرة الثانية لاستخدام _putchar */
}
