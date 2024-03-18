/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:32:45 by allegare          #+#    #+#             */
/*   Updated: 2024/03/12 13:19:57 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	if (!f)
		return (ft_strdup(s));
	result = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!result)
		return (NULL);
	while (i < (unsigned int)ft_strlen(s))
	{
		result[i] = f(i, s[i]);
		i++;
	}
	return (result);
}
