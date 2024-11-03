/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:40:27 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/24 20:11:40 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct s_solve
{
	int	x;
	int	y;
	int	size;
	int	col;
	int	line;
}	t_solve;

typedef struct s_map
{
	int		size;
	int		nline;
	char	empty;
	char	rock;
	char	filler;
}	t_map;

void	ft_solve_one(char **split, struct s_map *map_values);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_print_error(char *str);
void	ft_putstr(char *str);

void	ft_resolve(struct s_solve *solve, char **split \
		, struct s_map *map_values);

int		ft_check_col(struct s_solve *solve, char **split \
		, struct s_map *map_values);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_get_map_values(char *map);
int		ft_check_map_error(int i, char **av);
int		count_size_file(char *name_file);
int		check_size_map(char **split);
int		ft_is_square_valid(char **split, struct s_map *map_values);
int		ft_get_map_values_pos(char **split, int i);
int		ft_len(char **str);
int		ft_identical_params(char **split);
int		check_nb_line(char **split, struct s_map *map_values);
int		check_nb_line(char **split, struct s_map *map_values);

char	*ft_strcpy(char *dest, char *src);
char	**ft_split(char *str);
char	*open_map(char *name_file);
char	*ft_strdup(char *str, int finish, int start);

t_solve	*ft_init_s_solver(char *map);
t_map	*ft_init_s_map(char **split);

//void	ft_print_solve_map(struct s_solve *sol, struct s_map *mapv, char **map);
//void	ft_solve_map(struct s_map *map_values, char *map, char **split);

#endif
