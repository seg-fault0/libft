/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:58:10 by wimam             #+#    #+#             */
/*   Updated: 2024/11/20 21:56:10 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		t;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		t = 0;
		while (haystack[i + t] && haystack[i + t] == needle[t] && (i + t) < len)
			t++;
		if (needle[t] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
