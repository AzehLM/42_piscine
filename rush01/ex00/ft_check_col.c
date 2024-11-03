/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_col.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:11:19 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/14 19:55:14 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_check_col_up(char tab[][11], int col)
{
	int		vmax;
	int		count;
	int		i;
	int		j;
	int		pos;

	i = 0;
	vmax = 0;
	count = 0;
	j = tab[0][col] - 48;
	while (i < 5)
	{
		pos = tab[i][col] - 48;
		if (pos > vmax)
		{
			vmax = pos;
			count++;
		}
		i++;
	}
	if (count != j)
		return (-1);
	return (0);
}

int	ft_check_col_down(char tab[][11], int col)
{
	int		vmax;
	int		count;
	int		i;
	int		j;
	int		pos;

	i = 4;
	vmax = 0;
	count = 0;
	j = tab[5][col] - 48;
	while (i > 0)
	{
		pos = tab[5][col] - 48;
		if (pos > vmax)
		{
			vmax = pos;
			count++;
		}
		i--;
	}
	if (count != j)
		return (-1);
	return (0);
}

int	ft_check_col(char tab[][11], int col)
{
	if (ft_check_col_up(tab, col) != 0)
		return (-1);
	else if (ft_check_col_down(tab, col) != 0)
		return (-1);
	return (0);
}
