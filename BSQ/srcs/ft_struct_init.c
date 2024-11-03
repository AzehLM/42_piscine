/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:33:06 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/24 20:06:56 by samaouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_get_map_values_pos(char **split, int i)
{
	while (split[0][i] >= '0' && split[0][i])
		i++;
	return (i);
}

t_solve	*ft_init_s_solver(char *map)
{
	struct s_solve	*val;
	char			**split;

	split = ft_split(map);
	val = malloc(sizeof(t_solve));
	if (!val)
		return (NULL);
	val->x = 0;
	val->y = 0;
	val->size = 2;
	val->col = 0;
	val->line = 1;
	return (val);
}

t_map	*ft_init_s_map(char **split)
{
	int				i;
	struct s_map	*map_values;

	i = 0;
	map_values = malloc(sizeof(t_map));
	if (!map_values)
		return (NULL);
	while (split[0][i] >= '0' && split[0][i] <= '9')
		i++;
	i = ft_get_map_values_pos(split, i);
	while (split[0][i])
	{
		map_values[0].size = 2;
		map_values[0].empty = split[0][i++];
		map_values[0].rock = split[0][i++];
		map_values[0].filler = split[0][i++];
	}
	return (map_values);
}
