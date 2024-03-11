/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:48:54 by allegare          #+#    #+#             */
/*   Updated: 2024/02/14 15:44:05 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	t;

	t = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (t < n)
	{
		((unsigned char *)dst)[t] = ((unsigned char *)src)[t];
		t++;
	}
	return (dst);
}

// int main(void)
// {
// 	char	source[] = "Bonjour le monde";
// 	char	destination[22];

// 	printf("Avant fonction: %s\n", destination);
// 	ft_memcpy(destination, source, 22);
// 	printf("Après fonction: %s\n", destination);
// 	printf("lenght: %zu\n", ft_strlen(source));
// 	return (0);
// }
