#include "main.h"
/**
 * cap_string - capitalizes the words after a delimiter.
 * @s: Input sentence.
 * Return: A pointer to s.
 */
char *cap_string(char *s)
{
	int i, j;
	char *ptr = s, dlmt[13] = {'\n', '\t', ' ', ',', ';',\
			       '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; *ptr != '\0'; i++)
	{
		if ((*ptr > 96 && *ptr < 123) || (*ptr > 64 && *ptr < 91))
		{
			for (j = 0; j < 13; j++)
			{
				if (*(ptr - 1) == dlmt[j] && \
				    (*ptr > 96 && *ptr < 123))
					*ptr -= 32;
			}
			ptr++;
		}
	}
	return (s);
}
