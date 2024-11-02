/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:22:19 by wimam             #+#    #+#             */
/*   Updated: 2024/11/02 11:30:43 by wimam            ###   ########.fr       */
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

/*
#include <stdio.h>

char *ft_itoa(int n);  // Ensure you have the prototype for ft_itoa

int main()
{
    printf("expected : 123         |  got : %s\n", ft_itoa(123));
    printf("expected :-123         |  got : %s\n", ft_itoa(-123));
    printf("expected : 0           |  got : %s\n", ft_itoa(0));
    printf("expected : 2147483647  |  got : %s\n", ft_itoa(2147483647));
    printf("expected :-2147483648  |  got : %s\n", ft_itoa(-2147483648));
    printf("expected : 1           |  got : %s\n", ft_itoa(1));
    printf("expected :-1           |  got : %s\n", ft_itoa(-1));
    printf("expected : 10          |  got : %s\n", ft_itoa(10));
    printf("expected :-10          |  got : %s\n", ft_itoa(-10));
    printf("expected :-123456789   |  got : %s\n", ft_itoa(-123456789));
    printf("expected : 999999999    |  got : %s\n", ft_itoa(999999999));
    
    return (0);
}
//cc ft_itoa.c && ./a.out
*/