#include <stdio.h>
/**
 * main - Entry
 * Description: 'print number of base 10 using putchar'
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 0l n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
