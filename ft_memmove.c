/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:56:59 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 16:40:47 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL || src == NULL)
		return (NULL);
	if (src < dst)
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
