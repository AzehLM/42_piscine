/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prefill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:05:56 by bayari            #+#    #+#             */
/*   Updated: 2024/07/16 09:50:49 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "lib.h"

// void	ft_prefill_row_fleft(char tab[][11], int row, int col)
// {
// 	int	i;

// 	row = 0;
// 	col = 2;
// 	while (row == 0 && col <= 8)
// 	{
// 		i = 1;
// 		if (tab[row][col] == '4' && tab[row + 5][col] == '1')
// 		{
// 			while (i <= 4)
// 			{
// 				tab[row + i][col] += i;
// 				i++;
// 			}
// 		}
// 		col++;
// 	    }
// }

// void	ft_prefill_row_fright(char tab[][11], int row, int col)
// {
// 	int	i;

// 	row = 5;
// 	col = 2;
// 	while (row == 5 && col <= 8)
// 	{
// 		i = 1;
// 		if (tab[row][col] == '4' && tab[row - 5][col] == '1')
// 		{
// 			while (i <= 4)
// 			{
// 				tab[row - i][col] += i;
// 				i++;
// 			}
// 		}
// 		col++;
// 	    }
// }

// void	ft_prefill_col_fleft(char tab[][11], int row, int col)
// {
// 	int	i;
// 	int	n;

// 	n = 2;
// 	row = 1;
// 	col = 0;
// 	while (row <= 4 && col == 0)
// 	{
// 		i = 1;
// 		if (tab[row][col] == '4' && tab[row][col + 10] == '1')
// 		{
// 			while (i <= 4)
// 			{
// 				tab[row][col + n] += i;
// 				n = n + 2;
// 				i++;
// 			}
// 		}
// 		col++;
// 	    }
// }

// void	ft_prefill(char tab[][11], int row, int col)
// {
// 	ft_prefill_col_fleft(tab, row, col);
// 	ft_prefill_row_fleft(tab, row, col);
// 	ft_prefill_row_fright(tab, row, col);
// }
