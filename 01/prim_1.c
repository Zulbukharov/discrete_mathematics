#include "prim.h"

void	new_village(t_village *head, int num, int *km, int *sosed, int q)
{
	t_village *new;
	int i;

	new = NULL;
	new = (t_village*)(malloc(sizeof(t_village)));
	while (head->next != NULL)
	{
		//printf("[found next]\n");
		//printf("[%d]\n", head->number);
		head = head->next;
	}
	//printf("[%d]\n", head->number); 
	i = 0;
	new->number = num;
	while (i < q)
	{
		new->road[i].number = sosed[i];
		new->road[i].km = km[i];
		i++;
	}
	new->q = q;
	new->next = NULL;
	head->next = new;
}

void	print(t_village *head)
{
	while (head)
	{
		printf("[%d]\n", head->number);
		head = head->next;
	}
}

void	prim_algo(t_village *head)
{

}

int	main(void)
{
	t_village *a;
	int x;

	a = NULL;
	x = -1;
	a = (t_village*)(malloc(sizeof(t_village)));
	a->next = NULL;
	a->number = 1;
	a->road[0].number = 2;
	a->road[0].km = 3;
	a->road[1].number = 6;
	a->road[1].km = 2;
	t_num foo[6] =
	{
		{{3, 6, 3}, {1, 7, 3}, 3}, //b 2
		{{3, 1, 2, 3}, {2, 7, 5, 4}, 4}, //c 3
		{{3, 5}, {3, 5}, 2}, //d 4
		{{4, 3, 2, 5}, {6, 7, 3, 4}, 4}, //e 5
		{{2, 3, 4}, {1, 7, 5}, 3}, //f 6
		{{6, 1, 3, 3}, {2, 3, 5, 6}, 4}//g 7
	};
	t_village *clone = a;
	while (++x < 6)
		new_village(clone, x + 2, foo[x].km, foo[x].number, foo[x].q);
	prim_algo(a);
	printf("[now printing all]\n");
	print(a);
	return (0);
}
