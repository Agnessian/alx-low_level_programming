#include <stdio.h>
/**
 *main - print alpha in lower case and upper case
 *followed by a new line, expect q and e
 *Return:  Always 0
 */
int main(void)
{
	char la;

	for (la = 'a';  la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
