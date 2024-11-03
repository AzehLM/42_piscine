/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:31:12 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/03 14:46:54 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[size - 1 - i];
		tab[size - 1 - i] = tab[i];
		tab[i] = tmp;
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	int	tab[] = {0,1,2,3,4};
	int	size = 5;
	int	i = 0;
	
	ft_rev_int_tab(tab, size);	
	printf("Resultat avec tab[5] et {0,1,2,3,4}\n\n");
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return (0);
}*/
