/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 22:03:18 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/14 22:32:58 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(char *str);
int		ft_check_arg(char *str);
int		ft_check_row(char tab[][11], int row);
int		ft_check_col(char tab[][11], int col);
int		ft_check_col_up(char tab[][11], int col);
int		ft_check_row_left(char tab[][11], int row);
int		ft_check_col_down(char tab[][11], int col);
int		ft_solve(char tab[][11], int row, int col);
int		ft_check_row_right(char tab[][11], int row);
int		ft_check_value(char tab[][11], int row, int col, char value);

void	ft_border_pos(char tab[][11], char *str);
void	ft_init_tab(char tab[][11], int row, int col);
void	ft_print_tab(char tab[][11], int row, int col);
void	ft_print_border(char tab[][11], char *str, int row, int col);
// void	ft_prefill(char tab[][11], int row, int col);
// void	ft_prefill_row_fleft(char tab[][11], int row, int col);
// void	ft_prefill_row_fright(char tab[][11], int row, int col);
// void	ft_prefill_col_fleft(char tab[][11], int row, int col);

#endif
