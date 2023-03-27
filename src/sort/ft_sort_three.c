#include "../../incl/push_swap.h"

void	ft_sort_three(t_node **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->val)
	{
		rule_rra(stack_a);
		rule_sa(stack_a);
	}
	else if (ft_max(*stack_a) == (*stack_a)->val)
	{
		rule_ra(stack_a);
		if (!ft_checksorted(*stack_a))
			rule_sa(stack_a);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_max(*stack_a)) == 1)
			rule_rra(stack_a);
		else
			rule_sa(stack_a);
	}
}
