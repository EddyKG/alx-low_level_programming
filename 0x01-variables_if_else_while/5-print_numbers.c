#include <stdio.h>

/**
* main- prints single digit numbers of base 10 from 0
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
