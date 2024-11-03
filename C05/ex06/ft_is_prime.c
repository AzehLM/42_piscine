/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:42:23 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/15 13:56:58 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
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
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{

	(void) ac;
	printf("%d\n", ft_is_prime(atoi(av[1])));
	return (0);
}*/
