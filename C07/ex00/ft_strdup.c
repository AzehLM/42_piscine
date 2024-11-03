/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:07:01 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/18 08:59:07 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	int		size;

	size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*src;
	char	*kenzo;

	src = "";
	kenzo = ft_strdup(src);
	printf("'%s'\n", kenzo);
	free(kenzo);
	return (0);
}
*/
/*
int	main(int ac, char **av)
{
	char	*src;
	(void) ac;
	src = ft_strdup(av[1]);
	printf("%s\n", src);
	free(src);
	return (0);
}*/
