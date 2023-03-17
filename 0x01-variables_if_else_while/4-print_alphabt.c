#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * follwed by new line, print all except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('n\');
	return (0);
}
