/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:23:17 by allegare          #+#    #+#             */
/*   Updated: 2024/03/04 15:03:48 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < dstsize)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (srclen);
}

// int	main(void)

// {
// 	char	source1[] = "Bonjour, je suis Alexe.";
// 	char	source2[] = "Hello";
// 	char	source3[] = "Buenos dias";

// 	int	result = ft_strlcpy(source1, source2, 2);
// 	printf("resultat: %s %d\n", source1, result);
// 	result = ft_strlcpy(source2, source3, 0);
// 	printf("resultat: %s %d\n", source2, result);
// 	return (0);
// }