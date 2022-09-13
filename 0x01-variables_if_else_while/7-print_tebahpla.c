#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: 0 on success
 */
int main(void)
{
	char low = 'z';

	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');
	return (0);
}
