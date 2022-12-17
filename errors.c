#include "main.h"

/**
 * _eputs - function that prints to the stderr
 * @str: message to be printed
 */

void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while(str[i])
	{
		_eputchar(str[i]);
		i++;
	}
	return;
}
void _eputchar(char c)
{
	write(STDERR_FILENO, &c, 1);
	return;
}
