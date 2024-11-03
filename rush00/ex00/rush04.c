/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echauve <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:49:46 by echauve           #+#    #+#             */
/*   Updated: 2024/07/07 23:04:30 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 0;
	while (line <= y - 1)
	{
		col = 0;
		while (col <= x - 1)
		{
			if ((line == 0 && col == 0)
				|| ((line == y - 1 && col == x - 1) && (col != 0 && line != 0)))
				ft_putchar('A');
			else if ((col == 0 && line == y - 1) || (col == x - 1 && line == 0))
				ft_putchar('C');
			else if (line == 0 || line == y - 1 || col == 0 || col == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
