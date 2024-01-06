#include <stdio.h>

/**
 * jack_bauer - Function print each minutes of jack bauer 24 hours.
 *
 * Author global.name: Usman Saheed .K
 * Email global.email: uskehinde@gmail.com
 */

void jack_bauer(void)
{
	char m1, m2;
	int s1, s2;

	for (m1 = '0'; m1 <= '2'; m1++)
	{
		for (m2 = '0'; m2 <= '9'; m2++)
		{
			for (s1 = '0'; s1 < '6'; s1++)
			{
				for (s2 = '0'; s2 <= '9'; s2++)
				{
					putchar(m1);
					putchar(m2);
					putchar(':');
					putchar(s1);
					putchar(s2);
					putchar(10);

					if ((m1 == '2' && m2 == '3') && (s1 == '5' && s2 == '9'))
						return;
				}
			}
		}
	}
}
