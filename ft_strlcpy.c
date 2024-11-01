/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr >                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:05:11 by wimam             #+#    #+#             */
/*   Updated: 2024/10/23 11:11:54 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	t;

	t = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[t] != '\0' && t < (dstsize - 1))
	{
		dst[t] = src[t];
		t++;
	}
	dst[t] = '\0';
	return (ft_strlen(src));
}
