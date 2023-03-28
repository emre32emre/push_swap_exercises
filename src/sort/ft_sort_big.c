/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:14:30 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:16:30 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

void	ft_sort_b_till_3(t_node **stack_a, t_node **stack_b)
{
	int		i;
	t_node	*tmp;

	while (ft_stack_size(*stack_a) > 3 && !ft_checksorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->val))
				i = ft_apply_rarb(stack_a, stack_b, tmp->val, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->val))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->val, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->val))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->val, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->val))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->val, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_node	*ft_sort_b(t_node **stack_a)
{
	t_node	*stack_b;

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

t_node	**ft_sort_a(t_node **stack_a, t_node **stack_b)
{
	int		i;
	t_node	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->val))
				i = ft_apply_rarb(stack_a, stack_b, tmp->val, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->val))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->val, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->val))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->val, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->val))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->val, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	ft_sort(t_node **stack_a)
{
	t_node	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_stack_size(*stack_a) == 2)
		rule_sa(stack_a);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, ft_min(*stack_a));
		if (i < ft_stack_size(*stack_a) - i)
		{
			while ((*stack_a)->val != ft_min(*stack_a))
				rule_ra(stack_a);
		}
		else
		{
			while ((*stack_a)->val != ft_min(*stack_a))
				rule_rra(stack_a);
		}	
	}
}
