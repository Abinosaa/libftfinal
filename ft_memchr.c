/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:22:26 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 16:54:29 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	integer;

	s1 = (unsigned char *)s;
	integer = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (*(s1 + i) == integer)
		{
			return ((void *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}
