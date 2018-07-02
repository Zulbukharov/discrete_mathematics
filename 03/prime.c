#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac != 3 || atoi(av[1]) == 0 || atoi(av[2]) == 0)
		return (0);
	int i = 0;
	int j = atoi(av[1]);
	while (++i != atoi(av[2]))
		j *= atoi(av[1]);
	printf("[%d]\n", j);
	return (0);
}
