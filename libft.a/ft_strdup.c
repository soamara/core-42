/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <soamara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:13:25 by soamara           #+#    #+#             */
/*   Updated: 2024/10/23 19:45:15 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*start;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (s[size])
		size++;
	start = (char *)malloc(sizeof(*start) * (size + 1));
	if (start == NULL)
		return (NULL);
	while (s[i])
	{
		start[i] = s[i];
		i++;
	}
	start[i] = '\0';
	return (start);
}
