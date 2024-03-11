/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allegare <allegare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:48:03 by allegare          #+#    #+#             */
/*   Updated: 2024/03/07 16:02:51 by allegare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (!(c >= '0' && c <= '9'))
		return (0);
	else
		return (1);
}

// int	main(void)
// {
// 	char	str1[] = "11111 1111";
// 	char	str2[] = "A12BCC21";
// 	char	str3[] = "a333aavvv3";
// 	char 	str4[] = "1212212";

// 	printf("Résultat de str1: %d\n", ft_isdigit(str1));
// 	printf("Résultat de str2: %d\n", ft_isdigit(str2));
// 	printf("Résultat de str3: %d\n", ft_isdigit(str3));
// 	printf("Résultat de str4: %d\n", ft_isdigit(str4));
// 	return (0);
// }