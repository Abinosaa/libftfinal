/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:28:28 by allegare          #+#    #+#             */
/*   Updated: 2024/03/08 13:00:23 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (len == 0 || *s == '\0' || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	result = ft_calloc(len + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	while (s[start] != '\0')
	{
		if (i <= len - 1)
		{
			result[i] = s[start];
		}
		i++;
		start++;
	}
	return (result);
}
