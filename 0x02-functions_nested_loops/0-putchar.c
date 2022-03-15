#include "main.h"

/**
* main - Print "_putchar"
*
* Return: Always 0 
*/

int main(void)
{
	int i = 0;
	char p[] = "_putchar\n";

	while (p[i])
		{
		_putchar(p[i]);
		i++;
		}
	return (0);
}
