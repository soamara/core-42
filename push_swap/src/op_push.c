/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:39:21 by soamara           #+#    #+#             */
/*   Updated: 2025/07/25 21:00:24 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int op_push(t_node **from, t_node  **to)
{
    t_node  *list;
    if(!*from)
        return(0);
    list = *from;
    *from = (*from) ->next;
    list->next = *to;
    *to = list;
    return(1);
}

void    pa(t_node **a, t_node **b)
{
    op_push(b, a);
    write(1, "pa\n", 3);
}

void    pb(t_node **a, t_node **b)
{
    op_push(a, b);
    write(1, "pb\n", 3);
}