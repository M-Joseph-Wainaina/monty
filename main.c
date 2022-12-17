#include "main.h"

int main(int ac, char *av[])
{
	int fd;

	stack_info op_stack;
	op_stack.head = NULL;
	op_stack.tail = NULL;
	
	if(ac != 2)
	{
		_eputs("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		if (errno == EACCES)
			exit(126);
		if (errno == ENOENT)
		{
			_eputs("Error: Can't open file ");
			_eputs(av[1]);
			_eputs("\n");
			exit(EXIT_FAILURE);
		}
		return (EXIT_FAILURE);
	}

	close(fd);
	return (0);

}
