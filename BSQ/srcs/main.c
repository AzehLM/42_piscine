/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:49:29 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/24 20:16:05 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	split_main(char *map)
{
	int		j;
	char	**split;
	t_map	*map_values;

	j = 0;
	split = ft_split(map);
	ft_putchar('\n');
	map_values = ft_init_s_map(split);
}

int	main(int ac, char **av)
{
	int			i;
	char		*map;
	int			j;

	j = 0;
	i = 1;
	while (++i <= ac)
	{
		if (ft_check_map_error(i, &av[i - 1]) == -1)
			return (-1);
		else
		{
			map = open_map(av[i - 1]);
			if (ft_get_map_values(map) == -1)
			{
				ft_print_error("map error\n");
				return (-1);
			}
			else
				split_main(map);
		}
	}
	return (0);
}
