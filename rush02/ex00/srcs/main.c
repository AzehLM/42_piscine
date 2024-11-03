/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 14:15:45 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/21 22:07:34 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	main(int ac, char **av)
{
	int	error;

	if (ft_check_arg(ac, av) == -1)
		return (-1);
	else if (ac == 2)
	{
		error = ft_print_numbers(NULL, av[1]);
		if (error == -2)
			ft_printerror("Dict Error - dictionary is empty");
	}
	else if (ac == 3)
	{
		error = ft_print_numbers(av[1], av[2]);
		if (error == -1)
			ft_printerror("Dict Error - dictionary name doesn't match.");
		if (error == -2)
			ft_printerror("Dict Error - dictionary is empty");
	}
	return (0);
}
