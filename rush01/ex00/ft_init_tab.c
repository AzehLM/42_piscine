/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 10:27:34 by atarit            #+#    #+#             */
/*   Updated: 2024/07/16 09:23:53 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_init_tab(char tab[][11], int row, int col)
{
	while (row < 6)
	{
		while (col < 11)
		{
			if (col % 2 == 0)
				tab[row][col] = '0';
			else
				tab[row][col] = ' ';
			col++;
		}
		col = 0;
		row++;
	}
}

void	ft_border_pos(char tab[][11], char *str)
{
	tab[0][2] = str[0];
	tab[0][4] = str[2];
	tab[0][6] = str[4];
	tab[0][8] = str[6];
	tab[5][2] = str[8];
	tab[5][4] = str[10];
	tab[5][6] = str[12];
	tab[5][8] = str[14];
	tab[1][0] = str[16];
	tab[2][0] = str[18];
	tab[3][0] = str[20];
	tab[4][0] = str[22];
	tab[1][10] = str[24];
	tab[2][10] = str[26];
	tab[3][10] = str[28];
	tab[4][10] = str[30];
}

void	ft_print_border(char tab[][11], char *str, int row, int col)
{
	int	i;

	i = 0;
	ft_init_tab(tab, row, col);
	ft_border_pos(tab, str);
	while (row < 6)
	{
		col = 0;
		while (col < 11)
		{
			col++;
			i++;
		}
		row++;
	}
}
