/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:43:44 by soamara           #+#    #+#             */
/*   Updated: 2025/06/25 11:43:44 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"
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
        node = new_node(atoi(argv[i]));
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

int main(void)
{
    t_node *stack = NULL;

    // Création manuelle de la pile : 42 -> 10 -> 5 -> 100
    add_back(&stack, new_node(42));
    add_back(&stack, new_node(10));
    add_back(&stack, new_node(5));
    add_back(&stack, new_node(100));

    // Indexation
    index_stack(stack);
    // Affichage pour vérifier les index
    t_node *tmp = stack;
    while (tmp)
    {
        printf("Value: %d | Index: %d\n", tmp->value, tmp->index);
        tmp = tmp->next;
    }

    return 0;
}