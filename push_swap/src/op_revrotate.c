/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_revrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 19:12:26 by soamara           #+#    #+#             */
/*   Updated: 2025/07/25 21:15:30 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int revrovate(t_node    **head)
{
    t_node  *first;
    t_node  *before_last;
    t_node  *last;
    t_node  *tmp;

    if(!(*head) || !(*head) -> next)
        return(0);
    first = *head;
    last = *head;
    tmp = *head;
    while(last->next)
        last = last->next;
    while(tmp->next->next)
        tmp = tmp->next;
    before_last = tmp;
    before_last->next = NULL;
    last->next = first;
    *head = last;
    return (1);
}

void    rra(t_node **a)
{
    revrovate(a);
    write(1, "rra\n", 4);
}

void    rrb(t_node **b)
{
    revrovate(b);
    write(1, "rrb\n", 4);
}

void    rrr(t_node **a, t_node   **b)
{
    revrovate(a);
    revrovate(b);
    write(1, "rrr\n", 4);
}