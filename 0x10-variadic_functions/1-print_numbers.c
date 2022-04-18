#include<stdio.h>
#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - a function ...
 * @separator: the chaine
 * @n: the number
 * @...: the char
 *
 * Return: 1 or 0
 */
void print_numbers(char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ap, int), separator);
	printf("%d", va_arg(ap, int));
	printf("\n");
	va_end(ap);
}