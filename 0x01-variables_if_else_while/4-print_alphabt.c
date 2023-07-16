#include <stdio.h>
/**
* main- prints alphabets but q and e
* Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue; /*skips the specified letters*/
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
