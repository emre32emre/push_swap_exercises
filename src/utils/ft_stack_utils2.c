/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:18:28 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:18:40 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

// Bu fonksiyon gönderilen sayının indexini döndürür.
// 1 .elemanın indexi 0 ır 
int	ft_find_index(t_node *a, int nbr)
{
	int		i;

	i = 0;
	while (a->val != nbr)
	{
		i++;
		a = a->next;
	}
	a->index = 0;
	return (i);
}

// stack_b'deki bir sayının doğru yerini bulur.
// Yani, nbr_push sayısı stack_b'ye eklenirken
// kaçıncı sıraya yerleşeceğini kontrol eder.
int	ft_find_place_b(t_node *stack_b, int nbr_push)
{
	int		i;
	t_node	*tmp;

	i = 1;
	if (nbr_push > stack_b->val && nbr_push < ft_get_first_node(stack_b)->val)
		i = 0;
	else if (nbr_push > ft_max(stack_b) || nbr_push < ft_min(stack_b))
		i = ft_find_index(stack_b, ft_max(stack_b));
	else
	{
		tmp = stack_b->next;
		while (stack_b->val < nbr_push || tmp->val > nbr_push)
		{
			stack_b = stack_b->next;
			tmp = stack_b->next;
			i++;
		}
	}
	return (i);
}

// stack_a'deki bir sayının doğru yerini bulur.
// Yani, nbr_push sayısı stack_a'ye eklenirken 
//kaçıncı sıraya yerleşeceğini kontrol eder.
int	ft_find_place_a(t_node *stack_a, int nbr_push)
{
	int		i;
	t_node	*tmp;

	i = 1;
	if (nbr_push < stack_a->val && nbr_push > ft_get_first_node(stack_a)->val)
		i = 0;
	else if (nbr_push > ft_max(stack_a) || nbr_push < ft_min(stack_a))
		i = ft_find_index(stack_a, ft_min(stack_a));
	else
	{
		tmp = stack_a->next;
		while (stack_a->val > nbr_push || tmp->val < nbr_push)
		{
			stack_a = stack_a->next;
			tmp = stack_a->next;
			i++;
		}
	}
	return (i);
}
