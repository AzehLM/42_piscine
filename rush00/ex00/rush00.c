/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiar <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:46:57 by aaguiar           #+#    #+#             */
/*   Updated: 2024/07/07 10:05:39 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	line;

	line = 0;
	while (line <= y - 1)
	{
		col = 0;
		while (col <= x - 1)
		{
			if ((line == 0 || line == y - 1) && (col == 0 || col == x - 1))
				ft_putchar('o');
			else if ((line == 0 || line == y - 1) && (col > 0 && col < x - 1))
				ft_putchar('-');
			else if ((line != 0 || line != y - 1) && (col == 0 || col == x - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
