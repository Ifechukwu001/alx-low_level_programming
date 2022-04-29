#include "main.h"
/**
 * _pow_recursion - raises an integer to a power.
 * @x: Base.
 * @y: Power.
 * Return: Integer Answer.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
