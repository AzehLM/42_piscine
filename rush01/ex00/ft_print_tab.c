/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:52:07 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/14 16:53:33 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_print_tab(char tab[][11], int row, int col)
{
	int	i;

	i = 0;
	row = 1;
	while (row < 5)
	{
		col = 2;
		while (col < 9)
		{
			write(1, &tab[row][col], 1);
			col++;
			i++;
		}
		write(1, "\n", 1);
		row++;
	}
}
