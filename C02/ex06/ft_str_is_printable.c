/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 23:01:37 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/21 17:37:11 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (1);
	while (str[i])
	{
		while (str[i] >= 32 && str[i] <= 126)
			i++;
		if (str[i] != '\0')
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char strv[] = "";
	char str[100] = "salut, comment tu vas ? 42mots quarAnte-deux; cin+quante";
	printf("normal    : %d\n",ft_str_is_printable(str));
	printf("str vide  : %d\n",ft_str_is_printable(strv));
}
*/
