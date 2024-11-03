/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 09:16:34 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/15 12:33:39 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	if (power > 1)
		power--;
	return (nb * ft_recursive_power(nb, power));
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	(void) ac;
	printf("%d\n", ft_recursive_power(atoi(av[1]), atoi(av[2])));
}*/
