/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:45:22 by soamara           #+#    #+#             */
/*   Updated: 2024/10/25 22:55:28 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	new;
	if (!*lst)
		return ;
	while (*lst)
	{
		new = (*lst) -> next;
		ft_delone(*lst,del);
		*lst = new;
	}
	*lst = 0;
}
