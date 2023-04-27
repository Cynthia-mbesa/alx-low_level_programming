#include "variadic_functions.h"
/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 *c: char
 *i: integer
 *f: float
 *s: char * (if the string is NULL, print (nil) instead
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s%s", separator, (s != NULL) ? s : "(nil)");
				break;
			default:
				j++;
				break;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
