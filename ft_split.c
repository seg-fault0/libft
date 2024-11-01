/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:15:17 by wimam             #+#    #+#             */
/*   Updated: 2024/10/30 15:51:33 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_row(char const *s, char c)
{
	int	i;
	int	ret;
	int	open;

	i = 0;
	ret = 0;
	open = 0;
	if (!s)
		return (ret);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			ret++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (ret);
}

static int	ft_charsrch(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	*ft_fill(char const *s, char c)
{
	int		len;
	char	*buffer;

	len = ft_charsrch(s, c);
	buffer = malloc (len + 1);
	buffer = ft_memcpy(buffer, s, len);
	buffer[len] = '\0';
	return (buffer);
}

char	**ft_split(char const *s, char c)
{
	int		row;
	int		i;
	char	**buffer;

	row = ft_row(s, c);
	buffer = malloc((row + 1) * sizeof(char *));
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < row)
	{
		while (*s && *s == c)
			s++;
		buffer[i] = ft_fill(s, c);
		i++;
		while (*s && *s != c)
			s++;
	}
	buffer[row] = NULL;
	return (buffer);
}
