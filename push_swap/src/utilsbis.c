/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsbis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 11:43:44 by soamara           #+#    #+#             */
/*   Updated: 2025/07/27 18:55:39 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (free(node), NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	add_back(t_node **stack, t_node *new)
{
	t_node	*tmp;

	if (*stack == NULL)
	{
		*stack = new;
	}
	else
	{
		tmp = *stack;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}

t_node	*init_stack_from_args(int argc, char **argv)
{
	int		i;
	t_node	*stack;
	t_node	*node;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		if (!is_int_range(argv[i]))
			return (NULL);
		node = new_node(atoi(argv[i]));
		if (!node)
			return (NULL);
		add_back(&stack, node);
		i++;
	}
	return (stack);
}

int	has_unindexed(t_node *stack)
{
	t_node	*tmp;

	tmp = stack;
	while (tmp)
	{
		if (tmp->index == -1)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

