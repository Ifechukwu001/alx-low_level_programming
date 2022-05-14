/**
 * print_name - prints a name according to a defined function.
 * @name: String to be printed.
 * @f: Callback function.
 * Return: Void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
