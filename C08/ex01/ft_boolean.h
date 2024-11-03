/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:38:31 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/17 13:41:52 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# include <stdint.h>

# define SUCCESS 0u
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN even
# define TRUE 1u
# define FALSE 0u

typedef uint8_t	t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

int	even(int nb)
{
	return (nb % 2 == 0);
}

#endif
