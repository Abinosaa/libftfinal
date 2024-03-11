/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:11:55 by allegare          #+#    #+#             */
/*   Updated: 2024/03/08 16:21:02 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>///////

int	is_sett(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	if (s1[0] == 0)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_sett(s1[start], set))
	{
		start++;
	}
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	while (is_sett(s1[end - 1], set))
		end--;
	trim = ft_calloc(end - start + 1, sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, &s1[start], end - start + 1);
	return (trim);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("Bonjour", "Bor"));
// }
