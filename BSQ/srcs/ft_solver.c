/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:10:36 by samaouch          #+#    #+#             */
/*   Updated: 2024/07/24 20:11:22 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

// void	ft_solve_map(struct s_map *map_values, char *map, char **split)
// {
// 	int				line;
// 	int				col;
// 	struct s_solve	*solve;

// 	solve = ft_init_s_solver(map);
// 	map_values->size = solve->size;
// 	col = 0;
// 	line = 1;
// 	while (split[line][col])
// 	{
// 		ft_resolve(solve, split, map_values);
// 		col++;
// 		if (!split[line][col] || solve->size > ft_strlen(split[line]) - col)
// 		{
// 			if (line != ft_len(split) - 1)
// 			{
// 				printf("yo");
// 				col = 0;
// 				line++;
// 			}
// 		}
// 	}
// 	if (solve->x == 0 && solve->y == 0)
// 	{
// 		ft_print_error("error\n");
// 		ft_solve_one(split, map_values);
// 	}
// 	else
// 		ft_print_solve_map(solve, map_values, split);
// }

int	ft_check_col(struct s_solve *solve, char **split, struct s_map *map_values)
{
	while (solve->line < solve->size)
	{
		if (split[solve->line][solve->col] == map_values->rock)
			return (-1);
		else
			solve->line ++;
	}
	return (0);
}

void	ft_resolve(struct s_solve *solve, char **split \
		, struct s_map *map_values)
{
	int	s_size;

	s_size = solve->size;
	while (split[solve->line][solve->col] != '\0'
		|| solve->size > ft_strlen(split[solve->line]) - solve->col)
	{
		while (solve->col < solve->size && solve->size != ft_len(split) - 1)
		{
			if (ft_check_col(solve, split, map_values) == 0
				&& split[solve->line][solve->col] != map_values->rock)
				solve->size++;
			solve->col++;
		}
		if (solve->size != s_size)
		{
			solve->x = solve->col;
			solve->y = solve->line;
			break ;
		}
		solve->line++;
	}
}

void	ft_solve_one(char **split, struct s_map *map_values)
{
	int	line;
	int	col;

	line = 1;
	col = 0;
	while (split[line][col])
	{
		col = 0;
		while (split[line][col])
		{
			if (split[line][col] == map_values->empty)
			{
				split[line][col] = map_values->filler;
				col++;
			}
			break ;
		}
		if (line == ft_len(split) - 1)
			break ;
		line++;
	}
}

// void	ft_print_solve_map(struct s_solve *sol, struct s_map *mapv, char **map)
// {
// 	int	line;
// 	int	col;

// 	col = 0;
// 	line = 0;
// 	while (map[line][col] != 0 && col != ft_strlen(map[0]))
// 	{
// 		while (line == sol->x && col == sol->y && col <= sol->size)
// 		{
// 			map[line][col] = mapv->filler;
// 			while (line == sol->x && col == sol->y && col <= sol->size)
// 			{
// 				map[line][col] = mapv->filler;
// 				col++;
// 			}
// 			col = sol->y;
// 			line++;
// 		}
// 		ft_putstr(map[line]);
// 		if (col < ft_strlen(map[0]))
// 			col++;
// 		if (line == ft_len(map) - 1)
// 			return ;
// 		if (col == ft_strlen(map[1]) || (line != ft_len(map) - 1))
// 		{
// 			ft_putchar('\n');
// 			if ((line < ft_len(map)))
// 			{
// 				line++;
// 				col = 0;
// 			}
// 		}
// 	}
// }
