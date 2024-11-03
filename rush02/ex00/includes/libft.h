/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:45:59 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/21 21:58:37 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dico
{
	char	*val;
	char	*str;
}	t_dico;

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_printerror(char *str);

int			ft_strlen(char *str);
int			ft_check_arg(int ac, char **av);
int			ft_first_check_arg(int ac, char **av);
int			ft_second_check_arg(int ac, char **av);
int			ft_third_check_arg(int ac, char **av);
int			ft_strcmp(char *s1, char *s2);
int			ft_is_printable(char c);
int			ft_print_numbers(char *path, char *val);

char		*ft_strndup(char *src, int size);
char		**ft_split(char *str, char *charset);
char		**ft_read_dico(char *path);

t_dico		*ft_parse_string_to_tab(char **str);

#endif
