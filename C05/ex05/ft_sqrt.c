/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:58:11 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/15 15:31:26 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = 0;
	while (n <= nb && i < 46431)
	{
		n = i * i;
		if (n == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void) ac;
	printf("%d\n", ft_sqrt(atoi(av[1])));
}*/
