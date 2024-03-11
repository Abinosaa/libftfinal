/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:43:19 by allegare          #+#    #+#             */
/*   Updated: 2024/03/11 15:17:15 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	len_str(int n)
{
	size_t	nb;

	nb = 1;
	while ((n / 10) > 0)
	{
		n /= 10;
		nb++;
	}
	return (nb);
}

char	*convert(int n, int sign)
{
	char	*result;
	size_t	i;

	result = ft_calloc(sign + len_str(n) + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = len_str(n) + sign -1;
	while (n >= 10)
	{
		result[i] = n % 10 + 48;
		i--;
		n /= 10;
	}
	result[i] = n + 48;
	i--;
	if (sign == 1)
		result[i] = '-';
	return (result);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*result;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	result = convert(n, sign);
	return (result);
}
