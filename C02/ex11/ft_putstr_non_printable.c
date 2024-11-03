/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 09:25:51 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/08 12:36:15 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthexa(unsigned char c)
{
	write(1, "\\", 1);
	write(1, &"0123456789abcdef"[c / 16], 1);
	write(1, &"0123456789abcdef"[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned char	*ustr;

	ustr = (unsigned char *)str;
	i = 0;
	while (ustr[i])
	{
		if (ustr[i] >= 32 && ustr[i] <= 126)
			ft_putchar(ustr[i]);
		else
			ft_puthexa(ustr[i]);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\x8d \a \b \t \n \v \f \rtu vas bien ?\n");
}
*/
