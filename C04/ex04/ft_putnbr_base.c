/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:58:56 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/11 17:51:14 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_error(char *base, int len_base)
{
	int	i;
	int	count;

	i = 0;
	count = i + 1;
	if (len_base < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (count < len_base)
		{
			if (base[i] == base[count])
				return (0);
			count++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len_base;
	int				error;
	long long int	nb;

	nb = (long long int) nbr;
	len_base = ft_strlen(base);
	error = ft_check_error(base, len_base);
	if (error == 0)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= len_base)
	{
		ft_putnbr_base(nb / len_base, base);
		write(1, &base[nb % len_base], 1);
	}
	else
		write(1, &base[nb % len_base], 1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	ft_putnbr_base(atoi(av[1]), av[2]);
}*/
