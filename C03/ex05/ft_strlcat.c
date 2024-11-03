/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 16:04:56 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/10 10:16:12 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	j = len_dest;
	i = 0;
	if (size <= len_dest)
		return (len_src + size);
	while (src[i] && i + len_dest + 1 < size)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char		dest[] = "";
	char		src[] = "test";
	unsigned int	size = 2;
	size_t		lengh = 3;
	char		s[] = "abc";

	s[length - 1] = ".";
	printf("%d string : %s\n", ft_strlcat(dest, src, size), src);
	printf("%ld string :  %s\n", strlcat(dest, src, size), src);
	return (0);
}
*/
