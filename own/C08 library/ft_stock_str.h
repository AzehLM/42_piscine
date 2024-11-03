/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 22:51:29 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/22 17:46:43 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;


void	ft_show_tab(struct s_stock_str *par);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

#endif