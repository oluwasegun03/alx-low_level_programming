#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, e, r;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (e = 0; e < (count - 1); e++)
	{
		for (r = e + 1; r > 0; r--)
		{
			temp = *(str + r);
			*(str + r) = *(str + (r - 1));
			*(str + (r - 1)) = temp;
		}
	}
}
