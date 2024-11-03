/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 17:40:45 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/21 21:50:15 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_check_arg(int ac, char **av)
{
	if (ac < 2 || ac > 3)
	{
		ft_printerror("Error - source: number of arguments.\n");
		return (-1);
	}
	else
	{
		if (ft_first_check_arg(ac, av) == -1
			|| ft_second_check_arg(ac, av) == -1
			|| ft_third_check_arg(ac, av) == -1)
			return (-1);
	}
	return (0);
}

int	ft_first_check_arg(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] == 32 || (av[1][i] >= 9 && av[1][i] <= 13))
			i++;
		if (av[1][i] == '-' || av[1][i] == '+')
		{
			if (av[1][i] == '-')
			{
				ft_printerror("Error - source: negative number.\n");
				return (-1);
			}
			i++;
		}
		if (!(av[1][i] >= '0' && av[1][i] <= '9'))
		{
			ft_printerror("Error - source: not a number.\n");
			return (-1);
		}
	}
	return (0);
}

int	ft_second_check_arg(int ac, char **av)
{
	int		i;

	i = 0;
	if (ac == 3)
	{
		while (av[2][i] == 32 || (av[2][i] >= 9 && av[2][i] <= 13))
			i++;
		if (av[2][i] == '-' || av[2][i] == '+')
		{
			if (av[2][i] == '-')
			{
				ft_printerror("Error - source: negative number.\n");
				return (-1);
			}
			i++;
		}
		if (!(av[2][i] >= '0' && av[2][i] <= '9'))
		{
			ft_printerror("Error - source: not a number.\n");
			return (-1);
		}
	}
	return (0);
}

int	ft_third_check_arg(int ac, char **av)
{
	char	*dict_name;
	int		i;

	dict_name = "numbers.dict";
	i = 0;
	if (ac == 3)
	{
		if (ft_strcmp(av[1], dict_name) != 0)
		{
			ft_printerror("Dict Error - dictionary name doesn't match.\n");
			return (-1);
		}
	}
	return (0);
}
