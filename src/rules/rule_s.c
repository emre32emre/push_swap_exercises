/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:25:58 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 15:00:26 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

static	int	rule_s(t_node **root)
{
	t_node	*first;
	t_node	*second;
	t_node	*rest;

	if (*root == NULL || (*root)->next == NULL)
		return (0);
	first = *root;
	second = first->next;
	rest = second->next;
	second->next = first;
	first->next = rest;
	*root = second;
	return (1);
}

void	rule_sa(t_node **stack_a)
{
	if (rule_s(stack_a) && DEBUG)
		write(1, "sa\n", 3);
}

void	rule_sb(t_node **stack_b)
{
	if (rule_s(stack_b) && DEBUG)
		write(1, "sb\n", 3);
}

void	rule_ss(t_node **stack_a, t_node **stack_b)
{
	if (rule_s(stack_a) && rule_s(stack_b) && DEBUG)
		write(1, "ss\n", 3);
}
