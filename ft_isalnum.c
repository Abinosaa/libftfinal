/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:53:34 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 15:59:48 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	str1[] = "11111 1111";
// 	char	str2[] = "A12BCC21";
// 	char	str3[] = "a333aavvv3";
// 	char 	str4[] = "1212212  ";

// 	printf("Résultat de str1: %d\n", ft_isalnum(str1));
// 	printf("Résultat de str2: %d\n", ft_isalnum(str2));
// 	printf("Résultat de str3: %d\n", ft_isalnum(str3));
// 	printf("Résultat de str4: %d\n", ft_isalnum(str4));
// 	return (0);
// }