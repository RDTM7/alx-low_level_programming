#include <stdio.h>
/**
 * main - Entry
 * Description: 'print alphabet except q and e'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;

	while (m <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
