/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 11:26:09 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 14:59:34 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"


static int	rule_p(t_node **stack_one, t_node **stack_two)
{
	int	val;

	if (*stack_two == NULL)
		return (0);
	val = ft_pop(stack_two);
	ft_push(stack_one, val);
	return (1);
}

void	rule_pa(t_node **stack_a, t_node **stack_b)
{
	if (rule_p(stack_a, stack_b) && DEBUG)
		write(1, "pa\n", 3);
}

void	rule_pb(t_node **stack_a, t_node **stack_b)
{
	if (rule_p(stack_b, stack_a) && DEBUG)
		write(1, "pb\n", 3);
}
