/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_identical_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 22:35:48 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/24 20:07:23 by samaouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_identical_params(char **split)
{
	int		len;

	len = ft_strlen(split[0]);
	if (split[0][len - 3] == split[0][len - 2]
			|| split[0][len - 3] == split[0][len - 1])
		return (-1);
	else if (split[0][len - 2] == split[0][len - 1]
			|| split[0][len - 2] == split[0][len - 3])
		return (-1);
	return (0);
}
