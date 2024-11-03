/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:09:20 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/06 21:14:28 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "bonjour a tous";
	char	str2[10];
	char	str3[10];

	ft_strcpy(str2, str);
	printf("ft_strcpy : %s\n", str2);
	strcpy(str3, str);
	printf("strcpy : %s\n", str3);	
}*/
