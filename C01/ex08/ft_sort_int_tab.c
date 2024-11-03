/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:47:46 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/10 19:25:11 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[] = {3,-9,0,4,45,142,141,143,140};
	int	size = 9;
	int	i = 0;

	ft_sort_int_tab(tab, size);
	printf("Resultat avec tab[9] et {3,-9,0,4,45,142,141,143,140}\n\n");
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
*/
