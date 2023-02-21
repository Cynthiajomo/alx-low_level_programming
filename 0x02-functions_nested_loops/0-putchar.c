<<<<<<< HEAD
#include "main.h"

/**
 * main - prints _putchar and a new line
 * Return: Always 0
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
=======
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return:On success 1.
 * On error, -1 is returned, and erroris set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
>>>>>>> 8a6a64eb2d1c5cb09e0ae7f8aff210e631456f46
}
