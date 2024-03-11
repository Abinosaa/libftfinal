/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:09:40 by allegare          #+#    #+#             */
/*   Updated: 2024/03/05 10:18:17 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	initial;

	if (!dst)
		return (ft_strlen(src) + dstsize);
	i = ft_strlen(dst);
	initial = i;
	j = 0;
	while (src[j] && (i < dstsize - 1) && dstsize)
		dst[i++] = src[j++];
	if (i < dstsize)
		dst[i] = '\0';
	if (initial < dstsize)
		return (ft_strlen(src) + initial);
	return (dstsize + ft_strlen(src));
}
