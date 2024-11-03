/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeh <azeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:22:05 by gueberso          #+#    #+#             */
/*   Updated: 2024/08/24 09:19:49 by azeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_board(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + 48;
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_check(int *board, int pos)
{
	int	i;
	int	diff;
	int	diff2;

	i = 0;
	if (pos == 0)
		return (0);
	while (i < 10)
	{
		if (board[i] == board[pos] && i < pos)
			return (-1);
		diff = i - pos;
		if (diff < 0)
			diff *= -1;
		diff2 = board[i] - board[pos];
		if (diff2 < 0)
			diff2 *= -1;
		if (diff == diff2 && i < pos)
			return (-1);
		i++;
	}
	return (0);
}

void	ft_solve(int *board, int pos, int *count)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		board[pos] = i;
		if (ft_check(board, pos) == 0)
		{
			if (pos < 9)
				ft_solve(board, pos + 1, count);
			else
			{
				ft_print_board(board);
				(*count)++;
			}
		}
		board[pos] = -1;
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	ft_solve(board, 0, &count);
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}*/
