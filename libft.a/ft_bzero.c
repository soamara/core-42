/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:29:23 by soamara           #+#    #+#             */
/*   Updated: 2024/10/23 12:28:57 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int main()
{
    char s[10] = "HelloWorld";

    ft_bzero(s, 5);  // Les 5 premiers caractères seront mis à 0 (zéro)

    // Affichage caractère par caractère (en valeurs numériques)
    for (int i = 0; i < 10; i++) {
        printf("s[%d] = %d\n", i, s[i]);
    }

    return 0;
}
*/
