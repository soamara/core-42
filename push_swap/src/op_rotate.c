/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 18:23:05 by soamara           #+#    #+#             */
/*   Updated: 2025/07/25 21:11:58 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int rotate(t_node **head)
{
    t_node  *first;
    t_node  *second;
    t_node  *last;

    if(!*head || !(*head)->next)
        return (0);

    first = *head;
    second = first->next;
    last = first;

    while(last->next)
        last = last ->next;

    last->next = first;
    first->next =  NULL;
    *head = second;
    
    return(1);
}

void    ra(t_node **a)
{
    rotate(a);
    write(1, "ra\n", 3);
}

void    rb(t_node **b)
{
    rotate(b);
    write(1, "rb\n", 3);
}

void rr(t_node **a, t_node **b)
{
    if(rotate(a) && rotate(b))
        write(1, "rr\n", 3);
}
