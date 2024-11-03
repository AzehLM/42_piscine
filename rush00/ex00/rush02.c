/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echauve <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 14:49:46 by echauve           #+#    #+#             */
/*   Updated: 2024/07/07 23:14:35 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	col;

	col = 0;
	while (col <= y - 1)
	{
		line = 0;
		while (line <= x - 1)
		{
			if ((col == 0 && line == 0) || (col == 0 && line == x - 1))
				ft_putchar('A');
			else if ((col == y - 1 && line == 0)
				|| (col == y - 1 && line == x - 1))
				ft_putchar('C');
			else if ((col == 0 || col == y - 1) || (line == 0 || line == x - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			line++;
		}
		ft_putchar('\n');
		col++;
	}
}
