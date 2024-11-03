/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:44:15 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/14 21:42:33 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_check_value(char tab[][11], int row, int col, char value)
{
	int		x_row;
	int		y_col;

	x_row = 1;
	y_col = 2;
	while (x_row < 5)
	{
		if (tab[x_row][col] == value && x_row != row)
			return (-1);
		x_row++;
	}
	while (y_col < 9)
	{
		if (tab[row][y_col] == value && y_col != col)
			return (-1);
		y_col += 2;
	}
	return (0);
}
