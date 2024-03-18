/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:05:38 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 17:18:42 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*cpy;

	len = ft_strlen(s1);
	cpy = ft_calloc(len + 1, sizeof(char));
	if (!cpy)
		return (NULL);
	ft_memcpy(cpy, s1, len);
	return (cpy);
}
