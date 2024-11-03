/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:16:40 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/15 13:56:22 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
			break ;
		else
			i++;
	}
	if (i == nb)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb == 0 || nb == 1)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
	{
		while (!ft_is_prime(i))
		{
			ft_is_prime(i);
			i++;
		}
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void) ac;
	printf("%d\n", ft_find_next_prime(atoi(av[1])));
}*/
