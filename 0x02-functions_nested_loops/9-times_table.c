#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
 */

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		-putchar(',');
		-putchar(' ');

		prod = num * mult;
		if (prod <= 9)
			_putchar(' ');
		else
			-putchar((prod / 10) + 48);
		-putchar((prod % 10) + 48);
	}
	-putchar('\n');
}
