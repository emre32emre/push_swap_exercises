/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 12:50:30 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:13:22 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

int	ft_checksorted(t_node *stack_a)
{
	int	i;

	i = stack_a->val;
	while (stack_a)
	{
		if (i > stack_a->val)
			return (0);
		i = stack_a->val;
		stack_a = stack_a->next;
	}
	return (1);
}
