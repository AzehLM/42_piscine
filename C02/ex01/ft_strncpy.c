/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:18:53 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/06 23:29:28 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "bonjour a tous";
	char	str2[20];
	char	str3[20];

	ft_strncpy(str2, str, 20);
	printf("ft_strncpy : %s\n", str2);
	strncpy(str3, str, 20);
	printf("strncpy : %s\n", str3);
	ft_strncpy(str2, str, 20);
        printf("ft_strncpy : %s\n", str2);
	return (0);
}*/
