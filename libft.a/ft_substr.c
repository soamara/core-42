/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soamara <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 18:51:51 by soamara           #+#    #+#             */
/*   Updated: 2024/10/23 19:17:35 by soamara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	sl;
	size_t	f;

	if (!s)
		return (0);
	sl = ft_strlen(s);
	f = 0;
	if (start < sl)
		f = sl - start;
	if (f > len)
		f = len;
	new = (char *)malloc(sizeof(char) * (f + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, f + 1);
	return (new);
}
