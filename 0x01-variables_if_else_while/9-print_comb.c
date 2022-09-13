#include <stdio.h>
/**
 * main - prints all possible combinations of single digits
 *
 * Return: 0 on Success
 */   
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(1);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
	

