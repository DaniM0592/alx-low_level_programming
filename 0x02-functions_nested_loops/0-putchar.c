#include <stdio.h>
/**
 * Description: main - prints ot a string from a character array.
 * Return: 0 if success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 11; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}

