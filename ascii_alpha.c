#include <stdio.h>

/**
 * main - Prints all ascii alphabet character, both lower and
 *		upppercase including their asccii numbering
 *
 * Loop Statement - for: Iterate lower, upper to read and write
 *		all alphabet from 'A' (upper), 'a' (lower) to
 *		'Z' (upper), 'z' (lower)
 *
 * Return: 0
 *
 * Author: Usman Saheed .K
 */

int main(void)
{
	char lower, upper;

	for (lower = 'a', upper = 'A'; lower <= 'z'; lower++, upper++)
		printf("%c = %i\t%c = %i\n", upper, upper, lower, lower);

	return(0);
}
