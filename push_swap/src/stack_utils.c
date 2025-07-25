/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:43:44 by soamara           #+#    #+#             */
/*   Updated: 2025/07/25 21:10:19 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

t_node *new_node(int value)
{
    t_node *node;

    node = malloc(sizeof(t_node));
    if (!node)
        return (free(node), NULL);
    node->value = value;
    node->index = -1;
    node->next = NULL;
    return (node);
}

void add_back(t_node **stack, t_node *new)
{
    if(*stack == NULL)
    {
        *stack = new;
    }
    else
    {
        t_node *tmp;

        tmp = *stack;
        while(tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
}

t_node	*init_stack_from_args(int argc, char **argv)
{
    int i;
    t_node  *stack;
    t_node  *node;

    stack = NULL;
    i = 1;
    while (i < argc)
    {
        if(!is_int_range(argv[i]))
            return(free_stack(stack), NULL); // il faut free la memoire ici
        node = new_node(atoi(argv[i]));
        if(!node)
            return(free_stack(stack), NULL);
        add_back(&stack, node);
        i++;
    }
    return(stack);
}

int	has_unindexed(t_node *stack)
{
	t_node *tmp = stack;
	while (tmp)
	{
		if (tmp->index == -1)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	index_stack(t_node *stack)
{
    int i;

    i = 0;
    while (has_unindexed(stack))
    {
        t_node *tmp;
        t_node *min_node;

        int lower;

        min_node = NULL;
        tmp = stack;
        lower = 2147483647;
        while (tmp)
        {
            if (lower > tmp -> value && tmp->index == -1)
            {    
                lower = tmp ->value;
                min_node = tmp;
            }
            tmp = tmp->next;
        }
        if(min_node)
            min_node->index = i++;
    }
}