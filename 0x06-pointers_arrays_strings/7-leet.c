#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char l[] = "aeotl";
	char L[] = "AEOTL";
	char n[] = "43071";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0' && L[j] != '\0'; j++)
		{
			if (s[i] == l[j] || s[i] == L[j])
				s[i] = n[j];
		}
	}
	return (s);
}
