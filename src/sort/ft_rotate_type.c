/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:04:06 by yogun             #+#    #+#             */
/*   Updated: 2023/03/28 12:14:20 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

//Bu fonksiyon, A yığınından B yığınına eleman taşıma işlemi sırasında,
//hangi rotasyon kombinasyonunun en uygun olduğunu hesaplar ve karar verir.

int	ft_rotate_type_ab(t_node *a, t_node *b)
{
	int		i;
	t_node	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->val);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->val))
			i = ft_case_rarb(a, b, tmp->val);
		if (i > ft_case_rrarrb(a, b, tmp->val))
			i = ft_case_rrarrb(a, b, tmp->val);
		if (i > ft_case_rarrb(a, b, tmp->val))
			i = ft_case_rarrb(a, b, tmp->val);
		if (i > ft_case_rrarb(a, b, tmp->val))
			i = ft_case_rrarb(a, b, tmp->val);
		tmp = tmp->next;
	}
	return (i);
}

//Bu fonksiyon, yığını sıralamak için hangi döndürme 
//kombinasyonunun en iyi olduğunu hesaplar ve karar verir. 
int	ft_rotate_type_ba(t_node *a, t_node *b)
{
	int		i;
	t_node	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->val);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->val))
			i = ft_case_rarb_a(a, b, tmp->val);
		if (i > ft_case_rrarrb_a(a, b, tmp->val))
			i = ft_case_rrarrb_a(a, b, tmp->val);
		if (i > ft_case_rarrb_a(a, b, tmp->val))
			i = ft_case_rarrb_a(a, b, tmp->val);
		if (i > ft_case_rrarb_a(a, b, tmp->val))
			i = ft_case_rrarb_a(a, b, tmp->val);
		tmp = tmp->next;
	}
	return (i);
}
