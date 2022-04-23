#include "main.h"
/**
 * _strcmp - compares the lengths of different strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: -15 if <, 0 if =, 15 if >.
 */
int _strcmp(char *s1, char *s2)
{
	int cnt1 = 0, cnt2 = 0;

	while (s1[cnt1] != '\0')
		cnt1++;
	while (s2[cnt2] != '\0')
		cnt2++;

	if (cnt1 > cnt2)
		return (15);
	else if (cnt1 < cnt2)
		return (-15);
	else
		return (0);
}
