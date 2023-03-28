/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_utils_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkocabas <mkocabas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:59:45 by yogun             #+#    #+#             */
/*   Updated: 2023/03/28 12:17:16 by mkocabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/push_swap.h"

//Bu fonksiyon, stack'leri birlikte kaç kez döndürmemiz gerektiğini hesaplar. 
//Çünkü belirli bir döndürme sayısından sonra, 
//sadece bir stack döndürme ile devam edeceğiz.
int	ft_case_rarb(t_node *a, t_node *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

//Bu fonksiyon, stack'leri birlikte kaç kez 
//ters çevirmemiz gerektiğini hesaplar. 
//Çünkü belirli bir döndürme sayısından sonra, 
//sadece bir stack döndürme ile devam edeceğiz. 
//Burada, indeks numarası yerine ters indeks numarasını kontrol ediyoruz. 
//Ters indeks numarası, liste boyutundan indeks numarasını çıkararak hesaplanır.
int	ft_case_rrarrb(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_stack_size(b) - ft_find_place_b(b, c);
	if ((i < (ft_stack_size(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_stack_size(a) - ft_find_index(a, c);
	return (i);
}

//Bu fonksiyon da benzer hesaplamalar yapar. 
//Bu fonksiyon, rra + rb durumu için aynı hesaplamaları yapar.
int	ft_case_rrarb(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_stack_size(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

// Bu fonksiyon da benzer hesaplamalar yapar. 
// Bu fonksiyon, ra + rrb durumu için aynı hesaplamaları yapar.
int	ft_case_rarrb(t_node *a, t_node *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_stack_size(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
