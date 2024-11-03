/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:53:20 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/17 17:29:48 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	size;

	size = max - min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * (size + 1));
	if (!range)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	*tab;

	tab = ft_range(-5, 3);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
