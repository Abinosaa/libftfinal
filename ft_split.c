/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:29:06 by allegare          #+#    #+#             */
/*   Updated: 2024/03/11 14:41:23 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*k_tab(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = calloc(i + 1, sizeof(char));
	i = 0;
	while (s[i] && s[i] != c)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

char	**free_space(char **free_tab)
{
	size_t	i;

	i = 0;
	while (free_tab[i])
	{
		free(free_tab[i]);
		i++;
	}
	free(free_tab);
	return (NULL);
}

size_t	num_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

size_t	size_split(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	k;

	i = 0;
	if (!s)
		return (NULL);
	tab = ft_calloc(num_word(s, c) + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	k = 0;
	while (k < num_word(s, c))
	{
		while (s[i] == c)
			i++;
		tab[k] = ft_substr(s, i, size_split(&s[i], c));
		if (!tab[k])
			return (free_space(tab));
		i += size_split(&s[i], c) + 1;
		k++;
	}
	return (tab);
}

// int	main(void)
// {
// 	char	**out;
// 	int		i = 0;

// 	out = ft_split("", 'x');
// 	printf("%s\n", "fuck");
// 	while (out && out[i])
// 	{
// 		printf("%s\n", out[i]);
// 		i++;
// 	}
// 	return (0);
// }