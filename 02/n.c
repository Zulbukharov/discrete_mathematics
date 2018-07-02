#include <stdio.h>
#include <stdlib.h>

/*
	n == 3
	n == 5
*/

int	main(int ac, char **av)
{
	int x;
	int num;

	if (ac != 2)
		return (0);
	num = 1;
	x = 0;
	while (++x < atoi(av[1]))
		num *= x;
	printf("[%d]\n", num);
	return (0);
}
