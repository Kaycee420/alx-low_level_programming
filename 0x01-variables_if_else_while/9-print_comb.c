#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
