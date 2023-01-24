/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arforgea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 21:39:09 by arforgea          #+#    #+#             */
/*   Updated: 2023/01/23 16:49:59 by arforgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_t)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new_t;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new_t;
	}
}
