/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_size_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:01:42 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/28 12:12:26 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

int	ft_stack_size(t_node *stack)
{
	int		size;
	t_node	*iter;

	iter = stack;
	size = 0;
	while (iter)
	{
		iter = iter->next;
		size++;
	}
	return (size);
}
