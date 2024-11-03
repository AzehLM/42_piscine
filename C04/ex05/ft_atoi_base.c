/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:13:16 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/18 16:51:14 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_error(char *base)
{
	int	i;
	int	len;
	int	count;

	i = 0;
	count = 0;
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == 127
			|| ((base[i] >= 9 && base[i] <= 13) || base[i] == 32))
			return (0);
		count = i + 1;
		while (count < len)
		{
			if (base[i] == base[count])
				return (0);
			count++;
		}
		i++;
	}
	return (1);
}

int	ft_format_char(char *str, char *base)
{
	int	i;
	int	count;
	int	lenbase;
	int	j;

	i = 0;
	lenbase = ft_strlen(base);
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		|| str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		j = 0;
		count = 0;
		while (base[j])
		{
			if (str[i] != base[j])
				count++;
			if (count == lenbase)
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	s;
	int	nb;
	int	baselen;

	baselen = ft_strlen(base);
	s = 1;
	i = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (((str[i] > 32 && str[i] < 43) || str[i] == 44
			|| (str[i] > 45 && str[i] < 127)) && ft_check_error(base) == 1)
	{
		if (i < ft_format_char(str, base))
			nb = nb * baselen + ft_find_index(str[i], base);
		i++;
	}
	return (nb * s);
}

#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("", "0123456789"));
}
