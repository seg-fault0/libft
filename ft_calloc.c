/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:53:47 by wimam             #+#    #+#             */
/*   Updated: 2024/11/02 11:13:54 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;
	size_t	x;

	if (count == 0 || size == 0)
		return (malloc(0));
	x = count * size;
	if (x / count != size || x / size != count)
		return (NULL);
	buffer = malloc(x);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, x);
	return (buffer);
}
