/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_and_push.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:13:29 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:13:44 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

int	ft_apply_rarb(t_node **a, t_node **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->val != c && ft_find_place_b(*b, c) > 0)
			rule_rr(a, b);
		while ((*a)->val != c)
			rule_ra(a);
		while (ft_find_place_b(*b, c) > 0)
			rule_rb(b);
		rule_pb(a, b);
	}
	else
	{
		while ((*b)->val != c && ft_find_place_a(*a, c) > 0)
			rule_rr(a, b);
		while ((*b)->val != c)
			rule_rb(b);
		while (ft_find_place_a(*a, c) > 0)
			rule_ra(a);
		rule_pa(a, b);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_node **a, t_node **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->val != c && ft_find_place_b(*b, c) > 0)
			rule_rrr(a, b);
		while ((*a)->val != c)
			rule_rra(a);
		while (ft_find_place_b(*b, c) > 0)
			rule_rrb(b);
		rule_pb(a, b);
	}
	else
	{
		while ((*b)->val != c && ft_find_place_a(*a, c) > 0)
			rule_rrr(a, b);
		while ((*b)->val != c)
			rule_rrb(b);
		while (ft_find_place_a(*a, c) > 0)
			rule_rra(a);
		rule_pa(a, b);
	}
	return (-1);
}

int	ft_apply_rrarb(t_node **a, t_node **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->val != c)
			rule_rra(a);
		while (ft_find_place_b(*b, c) > 0)
			rule_rb(b);
		rule_pb(a, b);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rule_rra(a);
		while ((*b)->val != c)
			rule_rb(b);
		rule_pa(a, b);
	}
	return (-1);
}

int	ft_apply_rarrb(t_node **a, t_node **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->val != c)
			rule_ra(a);
		while (ft_find_place_b(*b, c) > 0)
			rule_rrb(b);
		rule_pb(a, b);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rule_ra(a);
		while ((*b)->val != c)
			rule_rrb(b);
		rule_pa(a, b);
	}
	return (-1);
}
