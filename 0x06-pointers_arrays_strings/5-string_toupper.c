#include "main_h"

/**
 * string_toupper - changes lowercase to uppercase
 * @a: pointer
 * Return: char
 */
char *string_toupper(char *a)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
