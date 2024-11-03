/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:44:36 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/06 21:32:36 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_low(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	is_up(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	is_nb(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_alpha(char c)
{
	return ((is_low(c) || is_up(c) || is_nb(c)));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((i == 0 || !(is_alpha(str[i - 1]))) && is_low(str[i]))
			str[i] -= 32;
		if (is_up(str[i]) && is_alpha(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100] = "salut, comment tu vas ? 42mots quarAnte-deux; cin+quante";
    printf("before : %s\n",str);
    ft_strcapitalize(str);
    printf("after  : %s",str);
}
*/
