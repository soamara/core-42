/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sofiane <sofiane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:11:29 by soamara           #+#    #+#             */
/*   Updated: 2025/07/23 16:19:13 by sofiane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "push_swap.h"

int	main(int argc, char **argv)
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
        if (has_duplicates(stack))
        {
	        write(2, "Error\n", 6);
	        free_stack(stack);
    	    exit(1);
        }

		i++;
	}

	stack = init_stack_from_args(argc, argv);
	return (0);
}
