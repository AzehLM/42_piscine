/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeh <azeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:26:59 by samaouch          #+#    #+#             */
/*   Updated: 2024/08/26 17:06:13 by azeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	count_size_file(char *name_file)
{
	int		count;
	char	buff;
	int		fd;
	int		check;

	check = -1;
	count = 0;
	fd = open(name_file, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (check != 0)
	{
		check = read(fd, &buff, 1);
		count++;
	}
	close(fd);
	return (count);
}

char	*open_map(char *name_file)
{
	char	*map;
	int		fd;
	int		size;
	int		end;

	fd = open(name_file, O_RDONLY);
	size = count_size_file(name_file);
	map = malloc(sizeof(char) * (size + 1));
	end = read (fd, map, size);
	close(fd);
	map[end] = '\0';
	return (map);
}

int	ft_get_map_values(char *map)
{
	char	**split;
	t_map	*map_values;

	split = ft_split(map);
	map_values = ft_init_s_map(split);
	if (check_size_map(split) == -1)
		return (-1);
	if (check_nb_line(split, map_values) != 0)
		return (-1);
	if (ft_is_square_valid(split, map_values) != 0)
		return (-1);
	return (0);
}

int	check_size_map(char **split)
{
	int	len_line;
	int	i;

	i = 2;
	len_line = ft_strlen(split[1]);
	while (split[i])
	{
		if (len_line != ft_strlen(split[i]))
			return (-1);
		i++;
	}
	return (0);
}

int	ft_is_square_valid(char **split, struct s_map *map_values)
{
	int	i;
	int	j;

	i = 1;
	while (split[i])
	{
		j = 0;
		while (split[i][j])
		{
			if (split[i][j] != (map_values[0].empty)
					&& split[i][j] != (map_values[0].rock))
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}
