#include <stdio.h>
/**
 * first - function to be executed before the main function
 *
 *__attribute__((constructor)) - specifies that a function
 *should be excecuted automatically before the main function
 *is executed
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
