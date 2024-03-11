/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:45:38 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 16:54:04 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	char	*pts;

	totalsize = count * size;
	pts = malloc(totalsize);
	if (!pts)
		return (NULL);
	ft_bzero(pts, totalsize);
	return (pts);
}
