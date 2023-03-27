/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 10:52:42 by mkocabas          #+#    #+#             */
/*   Updated: 2023/03/27 12:25:39 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stack(t_node *root)
{
	ft_printf(C_GRN " ------- STACK YAZDIRILIYOR ------- \n");
	if (root == NULL)
	{
		ft_printf("stack boş.\n");
		return ;
	}
	while (root != NULL)
	{
		ft_printf(C_CYN "%d\n" C_RESET, root->val);
		root = root -> next;
	}
}

void	ft_print_two_stack(t_node *st_a, t_node *st_b)
{
	ft_printf(C_GRN " ------- STACK A ------- \t\t" "------- STACK B ------- \n");
	while (st_a != NULL || st_b != NULL)
	{
		if (st_a != NULL)
		{
			ft_printf(C_CYN "%d" C_RESET, st_a->val);
			st_a = st_a->next;
		}
		else
		{
			ft_printf(" ");
		}
		ft_printf("\t\t\t\t\t");
		if (st_b != NULL)
		{
			ft_printf(C_CYN "%d" C_RESET, st_b->val);
			st_b = st_b->next;
		}
		ft_printf("\n");
	}
}
