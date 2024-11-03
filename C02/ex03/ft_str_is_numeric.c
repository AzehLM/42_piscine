/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 22:51:22 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/06 21:18:26 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		while (str[i] >= 48 && str[i] <= 57)
			i++;
		if (str[i] != '\0')
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int     main(int ac, char **av)
{
        if (ac == 2)
                printf("%d\n", ft_str_is_numeric(av[1]));
        return (0);
}*/
