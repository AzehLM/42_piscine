/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 04:33:43 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/15 11:46:31 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int	i;

	if (nb == 0 || nb == 1)
		return (1);
	i = 0;
	n = 1;
	while (i < nb)
	{
		n *= nb - i;
		i++;
	}
	return (n);
}
/*
#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%d\n", ft_iterative_factorial(atoi(av[1])));
	(void) ac;
}*/
