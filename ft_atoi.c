/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:28:28 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 16:53:35 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	resultat;
	int	sign;

	resultat = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultat = resultat * 10 + (*str - '0');
		str++;
	}
	return (resultat * sign);
}

// int	main(void)
// {
// 	char	*x = "-+--++-62154";

// 	printf("%d\n",ft_atoi(x));
// 	printf("%d\n",atoi(x));
// 	return (0);
// }