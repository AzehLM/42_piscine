/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_row.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:23:27 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/14 19:57:33 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_check_row_left(char tab[][11], int row)
{
	int	vmax;
	int	count;
	int	i;
	int	j;
	int	pos;

	vmax = 0;
	count = 0;
	i = 2;
	j = tab[row][0] - 48;
	while (i < 10)
	{
		pos = tab[row][i] - 48;
		if (pos > vmax)
		{
			vmax = pos;
			count++;
		}
		i += 2;
	}
	if (count != j)
		return (-1);
	return (0);
}

int	ft_check_row_right(char tab[][11], int row)
{
	int	vmax;
	int	count;
	int	i;
	int	j;
	int	pos;

	vmax = 0;
	count = 0;
	i = 10;
	j = tab[row][10] - 48;
	while (i > 0)
	{
		pos = tab[i][row] - 48;
		if (pos > vmax)
		{
			vmax = pos;
			count++;
		}
		i -= 2;
	}
	if (count != j)
		return (-1);
	return (0);
}

int	ft_check_row(char tab[][11], int row)
{
	if (ft_check_row_left(tab, row) != 0)
		return (-1);
	else if (ft_check_row_right(tab, row) != 0)
		return (-1);
	return (0);
}
