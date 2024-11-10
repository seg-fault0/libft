/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:22:19 by wimam             #+#    #+#             */
/*   Updated: 2024/11/10 09:31:20 by wimam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(int n)
{
	int	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		length;
	long	num;

	num = n;
	length = get_num_length(n);
	result = (char *)malloc(length + 1);
	if (!result)
		return (NULL);
	result[length] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	else if (num == 0)
		result[0] = '0';
	while (num > 0)
	{
		result[--length] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
