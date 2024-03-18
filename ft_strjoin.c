/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:46:58 by allegare          #+#    #+#             */
/*   Updated: 2024/03/08 11:59:00 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*result;

	if (!s1 && !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	result = ft_calloc(i + j + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	while (j--)
		result[j + i] = s2[j];
	while (i--)
		result[i] = s1[i];
	return (result);
}
