/**
 * main - prints a string '_putchar'.
 *
 * Return: Always 0 if successful.
 */

int main(void)
{
	char ch[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(ch[i]);
	}
	return (0);
}
