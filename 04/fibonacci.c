#include <stdio.h>

int	main(void)
{
	int first;
	int second;
	int next;

	first = 1;
	second = 1;
	next = first + second;
	printf("[first][%d]\n[second][%d]\n", first, second);
	while (next < 100)
	{
		printf("[next][%d]\n", next);
		first = second;
		second = next;
		next = first + second;
	}
	return (0);
}
