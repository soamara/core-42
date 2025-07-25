/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:11:29 by soamara           #+#    #+#             */
/*   Updated: 2025/07/25 21:24:18 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <stdio.h>
void print_stack(t_node *stack)
{
    while (stack)
    {
        printf("%d ", stack->value);
        stack = stack->next;
    }
    printf("\n");
}

int is_sorted(t_node *stack)
{
    while (stack && stack->next)
    {
        if (stack->value > stack->next->value)
            return 0;
        stack = stack->next;
    }
    return 1;
}

int main(void)
{
    t_node *a = NULL;

    // Crée ta pile 3-2-1 (par exemple)
    add_back(&a, new_node(3));
    add_back(&a, new_node(2));
    add_back(&a, new_node(1));

    printf("Avant tri : ");
    print_stack(a);

    sort_3(&a);

    printf("Après tri : ");
    print_stack(a);

    if (is_sorted(a))
        printf("La pile est triée !\n");
    else
        printf("La pile n'est pas triée...\n");

    free_stack(a);
    return 0;
}

/*int	main(int argc, char **argv)
{
	t_node	*stack;
	int		i;

	if (argc < 2)
		return (0);

	i = 1;
	while (i < argc)
	{
		if (!is_numeric(argv[i]) || !is_int_range(argv[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	stack = init_stack_from_args(argc, argv);
	if (has_duplicates(stack))
	{
		write(2, "Error\n", 6);
		free_stack(stack);
		exit(1);
	}
	index_stack(stack);

	free_stack(stack);
	return (0);
}
*/