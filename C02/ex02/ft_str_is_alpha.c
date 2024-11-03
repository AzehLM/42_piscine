/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:41:45 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/06 21:16:49 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		while ((str[i] >= 65 && str[i] <= 90)
			|| (str[i] >= 97 && str[i] <= 122))
			i++;
		if (str[i] != '\0')
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", ft_str_is_alpha(av[1]));
	return (0);
}*/
