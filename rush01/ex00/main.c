/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:34:12 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/16 09:48:40 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_check_arg(char *str)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(str);
	if (size == 31)
	{
		while (str[i])
		{
			if (i % 2 == 0 && (str[i] < '0' || str[i] > '4'))
				return (0);
			if (i % 2 == 1 && (str[i] != ' '))
				return (0);
			i++;
		}
	}
	else
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	char	tab[6][11];
	int		row;
	int		col;

	row = 1;
	col = 2;
	if (ac != 2 || ft_check_arg(av[1]) == 0)
	{
		write(2, "Error\n", 6);
		return (-1);
	}
	else
	{
		ft_print_border(tab, av[1], row, col);
		ft_solve(tab, row, col);
		ft_print_tab(tab, row, col);
	}
	return (0);
}
