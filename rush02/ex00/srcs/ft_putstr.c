/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:48:36 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/21 21:38:58 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}