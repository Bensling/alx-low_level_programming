#include <stdio.h>
/**
* main - print alphabet in lower case
* followed by a new line
* print all except q and e
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'q' && ch != 'e')
		putchar(ch);
	putchar('\n');
	return (0);
}
