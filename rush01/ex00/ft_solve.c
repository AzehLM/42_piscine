/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:55:33 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/14 22:03:54 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_solve(char tab[][11], int row, int col)
{
	int		i;
	char	value;

	value = '1';
	i = 0;
	if (row == 5 && col == 10)
		return (ft_check_value(tab, row, col, value));
	if (row < 5 && col == 10)
		return (ft_solve(tab, row + 1, 2));
	while (value <= '4')
	{
		if (!ft_check_value(tab, row, col, value))
		{
			tab[row][col] = value;
			if (ft_solve(tab, row, col + 2))
				return (0);
		}
		value += 1;
	}
	return (-1);
}
