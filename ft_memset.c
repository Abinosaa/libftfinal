/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:35:30 by allegare          #+#    #+#             */
/*   Updated: 2024/03/04 14:53:20 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;

	p = b;
	if (!p)
		return (0);
	while (len--)
	{
		*p++ = (unsigned char)c;
	}
	return (b);
}

// int	main(void)
// {
// 	char	str[] = "Bonjour, je suis Alexe.";

// 	printf("Avant fonction: %s\n", str);
// 	ft_memset(str+4, '+', 5);
// 	printf("Après fonction: %s\n", str);
// 	return (0);
// }