
#include "../../incl/push_swap.h"

void	ft_sort_b_till_3(t_node **stack_a, t_node **stack_b)
{
	int		i;
	t_node	*tmp;

	while (ft_stack_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		tmp = *stack_a;
		// i = ft_rotate_type_ab(*stack_a, *stack_b);
		// while (i >= 0)
		// {
		// 	if (i == ft_case_rarb(*stack_a, *stack_b, tmp->nbr))
		// 		i = ft_apply_rarb(stack_a, stack_b, tmp->nbr, 'a');
		// 	else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->nbr))
		// 		i = ft_apply_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
		// 	else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->nbr))
		// 		i = ft_apply_rarrb(stack_a, stack_b, tmp->nbr, 'a');
		// 	else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->nbr))
		// 		i = ft_apply_rrarb(stack_a, stack_b, tmp->nbr, 'a');
		// 	else
		// 		tmp = tmp->next;
		// }
	}
}

t_node	*ft_sort_b(t_node **stack_a)
{
	t_node	*stack_b;
	//stack_b = malloc(sizeof(t_node));

	stack_b = NULL;
	if (ft_stack_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
		rule_pb(stack_a, &stack_b);
	if (ft_stack_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
		rule_pb(stack_a, &stack_b);
	 if (ft_stack_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
		ft_sort_b_till_3(stack_a, &stack_b);
	if (!ft_checksorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

void	ft_sort(t_node **stack_a)
{
	t_node	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_stack_size(*stack_a) == 2)
		rule_sa(stack_a);
	else
		stack_b = ft_sort_b(stack_a);
	ft_print_two_stack(*stack_a,stack_b);
}
