/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:39:38 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/24 19:51:24 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_check_map_error(int i, char **av)
{
	char	*fmap;

	i = 0;
	fmap = open_map(av[0]);
	if (ft_get_map_values(fmap) == -1)
	{
		ft_print_error("map error\n");
		return (-1);
	}
	return (0);
}
