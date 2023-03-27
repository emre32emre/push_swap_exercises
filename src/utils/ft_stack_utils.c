#include "../../incl/push_swap.h"

int	ft_min(t_node *a)
{
	int		i;

	i = a->val;
	while (a)
	{
		if (a->val < i)
			i = a->val;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_node *a)
{
	int		i;

	i = a->val;
	while (a)
	{
		if (a->val > i)
			i = a->val;
		a = a->next;
	}
	return (i);
}