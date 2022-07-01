#include <stdio.h>

/**
 *main->assign a random number to the variable n each time it is executed. 
 *print the last digit of the number stored in the variable n.
 *Return : always 0
 */
int main(void)
{
	char ch;
	int n;

	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	}
	putchar(10);
	return (0);
}
