/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:18:22 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:18:23 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

int	ft_min(t_node *a)
{
	int		i;

	i = a->val;
	while (a)
	{
		if (a->val < i)
			i = a->val;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_node *a)
{
	int		i;

	i = a->val;
	while (a)
	{
		if (a->val > i)
			i = a->val;
		a = a->next;
	}
	return (i);
}
