#ifndef PRIM_H
# define PRIM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_road
{
	int	km;
	int	number;
}		t_road;

typedef struct	s_num
{
	int	km[16];
	int	number[16];
	int	q;
}		t_num;

typedef struct s_short
{
	int	villages[16];
	int	sum;
}		t_short;

typedef struct	s_village
{
	int	number;
	t_road	road[16];
	int	q;
	struct s_village	*next;
}		t_village;

#endif
