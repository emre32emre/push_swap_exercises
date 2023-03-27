#include "../../incl/push_swap.h"

int	ft_find_index(t_node *a, int nbr)
{
	int		i;

	i = 0;
	while (a->val != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}
