/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:05:33 by wimam             #+#    #+#             */
/*   Updated: 2024/10/30 15:28:50 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*buffer;
	size_t		i;

	buffer = (const char *) s;
	i = 0;
	while (i < n)
	{
		if (buffer[i] == c)
			return ((void *)&buffer[i]);
		i++;
	}
	return (NULL);
}
