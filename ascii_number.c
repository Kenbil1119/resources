#include <stdio.h>

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		printf("%c = %i\n", num, num);

	return(0);
}

/**
 * main - Prints all ascii digit character
 *		including their asccii numbering
 *
 * Loop Statement - for: Iterate num from '0' to '9'
 *
 * Return: 0
 *
 * Author: Usman Saheed
 */
