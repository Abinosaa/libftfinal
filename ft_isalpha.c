/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:34:31 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 16:47:20 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = aaabbbccc";
// 	char	str2[] = "ABCC";
// 	char	str3[] = "a333aavvv3";
// 	char 	str4[] = "1212212  ";

// 	printf("Résultat de str1: %d\n", ft_isalpha(str1));
// 	printf("Résultat de str2: %d\n", ft_isalpha(str2));
// 	printf("Résultat de str3: %d\n", ft_isalpha(str3));
// 	printf("Résultat de str4: %d\n", ft_isalpha(str4));
// 	return (0);
// }