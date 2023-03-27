/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:52:10 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 14:59:47 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

static	int	rule_r(t_node **stack)
{
	t_node	*current;
	int		first_value;

	current = *stack;
	if (current == NULL || current->next == NULL)
		return (0);
	first_value = current->val;
	while (current->next != NULL)
	{
		current->val = current->next->val;
		current = current->next;
	}
	current->val = first_value;
	return (1);
}

void	rule_ra(t_node **stack_a)
{
	if (rule_r(stack_a) && DEBUG)
		write(1, "ra\n", 3);
}

void	rule_rb(t_node **stack_b)
{
	if (rule_r(stack_b) && DEBUG)
		write(1, "rb\n", 3);
}

void	rule_rr(t_node **stack_a, t_node **stack_b)
{
	if (rule_r(stack_a) && rule_r(stack_b) && DEBUG)
		write(1, "rr\n", 3);
}
