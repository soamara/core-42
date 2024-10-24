/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:58:23 by soamara           #+#    #+#             */
/*   Updated: 2024/10/23 12:48:23 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
	{
		return (0);
	}
	return (1);
}
/*
int main(void)
{
    char str1[] = "123456";
    char str2[] = "123a456";

    // Test avec une chaîne qui contient uniquement des chiffres
    printf("%d",ft_is_digit(str1));  // Affiche '1'
    write(1, "\n", 1);        // Pour passer à la ligne
	
    // Test avec une chaîne qui contient des lettres et des chiffres
    printf("%d",ft_is_digit(str2));  // Affiche '0'
    write(1, "\n", 1);        // Pour passer à la ligne


    return (0);
}*/
