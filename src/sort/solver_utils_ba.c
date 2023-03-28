/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ba.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:17:30 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:18:08 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

// ra rb durumlarını hesaplar
int	ft_case_rarb_a(t_node *a, t_node *b, int c)
{
	int	i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

// rra - rrb durumlarını hesaplar
int	ft_case_rrarrb_a(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_stack_size(a) - ft_find_place_a(a, c);
	if ((i < (ft_stack_size(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = ft_stack_size(b) - ft_find_index(b, c);
	return (i);
}

// ra - rrb durumlarını hesaplar
int	ft_case_rarrb_a(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(b, c))
		i = ft_stack_size(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

// rra + rb durumlarını hesaplar 
int	ft_case_rrarb_a(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_stack_size(a) - ft_find_place_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}
