#include "main.h"
/**
 *_puts - outputs string in stdout
 *@str: string to print
 *Return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
