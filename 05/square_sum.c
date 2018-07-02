#include <stdio.h>

int	main(void)
{
	int n;
	int k;
	int l;
	int sum;

	n = 5;
	k = 1;
	l = 0;
	sum = 0;
	while (k < 2 * n)
	{
		l = l + k;
		sum += l;
		k += 2;
		printf("[sum][%d]\n", sum);
	}
	return (0);
}
