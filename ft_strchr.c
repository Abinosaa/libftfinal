/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:19:17 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 16:55:52 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	j = 0;
	while (j <= i)
	{
		if (*(char *)s == (char)c)
			return ((char *)s);
		s++;
		j++;
	}
	return (NULL);
}
