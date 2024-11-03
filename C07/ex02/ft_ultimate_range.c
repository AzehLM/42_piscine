/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 10:29:11 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/17 18:12:42 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	if (min >= max)
		return (0);
	*range = (int *)malloc(sizeof(int) * (size + 1));
	if (!range)
		return (-1);
	i = -1;
	while (++i < size)
		range[0][i] = min + i;
	return (max - min);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	**tab;
	int	test;

	tab = malloc(sizeof(int **));
	test = ft_ultimate_range(tab, -5, 3);
	i = 0;
	while (i < 8)
	{
		printf("t[%d] : %d\n", i, (*tab)[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
