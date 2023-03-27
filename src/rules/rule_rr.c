/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 12:57:50 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 15:00:58 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

static	int	rule_rrx(t_node **stack)
{
	t_node	*current;
	t_node	*last_node;

	current = *stack;
	if (current == NULL || current->next == NULL)
		return (0);
	while (current->next != NULL)
	{
		last_node = current;
		current = current->next;
	}
	last_node->next = NULL;
	current->next = *stack;
	*stack = current;
	return (1);
}

void	rule_rra(t_node **stack_a)
{
	if (rule_rrx(stack_a) && DEBUG)
		write(1, "rra\n", 4);
}

void	rule_rrb(t_node **stack_b)
{
	if (rule_rrx(stack_b) && DEBUG)
		write(1, "rrb\n", 4);
}

void	rule_rrr(t_node **stack_a, t_node **stack_b)
{
	if (rule_rrx(stack_a) && rule_rrx(stack_b) && DEBUG)
		write(1, "rrr\n", 4);
}
