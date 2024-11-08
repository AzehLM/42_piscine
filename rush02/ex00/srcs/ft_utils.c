/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:37:58 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/21 21:41:45 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_is_printable(char c)
{
	int	i;

	i = 0;
	if (c < 32 && c != 127)
		return (0);
	return (1);
}
