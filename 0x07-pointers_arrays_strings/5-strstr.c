#include "main.h"
/**
 * _strstr - finds the first occurence of a little string in a larger one.
 * @haystack: The larger string.
 * @needle: The little string.
 * Return: Pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	char *ptr = '\0';

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			ptr = &haystack[i];

			for (; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					continue;
				else
				{
					ptr = '\0';
					break;
				}
			}
		}
	}
	return (ptr);
}
