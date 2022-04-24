#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: Input string.
 * Return: A pointer to s.
 */
char *leet(char *s)
{
	int i, j;
	char ltr[5][2] = {{'A', 'a'}, {'E', 'e'}, {'O', 'o'},
			  {'T', 't'}, {'L', 'l'}};
	char num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (((s[i] > 96 && s[i] < 123) || (s[i] > 64 && s[i]
			     < 91)) && (s[i] == ltr[j][0] || s[i] == ltr[j][1]))
				s[i] = num[j];
		}
	}
	return (s);
}
