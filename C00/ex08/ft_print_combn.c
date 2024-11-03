/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeh <azeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:54:02 by gueberso          #+#    #+#             */
/*   Updated: 2024/09/29 11:05:00 by azeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int *tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}

int	*ft_increm(int *tab, int n)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (tab[i] == max)
	{
		i--;
		max--;
	}
	tab[i] += 1;
	while (i < n - 1)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
	return (tab);
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		tab[i] = i;
		i++;
	}
	ft_print_tab(tab, n);
	while (tab[0] != (10 - n))
	{
		ft_increm(tab, n);
		write(1, ", ", 2);
		ft_print_tab(tab, n);
	}
}
/*
int	main(int ac, char **av)
{
	(void) ac;
	ft_print_combn(atoi(av[1]));
	return (0);
}*/
