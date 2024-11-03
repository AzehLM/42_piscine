/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kporceil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:52:57 by kporceil          #+#    #+#             */
/*   Updated: 2024/07/09 23:05:31 by kporceil         ###   ########.fr       */
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

int	ft_check_base(char *base)
{
	int	len;
	int	i;
	int	c;

	i = 0;
	c = 0;
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == 127
			|| ((base[i] >= 9 && base[i] <= 13) || base[i] == 32))
			return (0);
		c = i + 1;
		while (c < len)
		{
			if (base[i] == base[c])
				return (0);
			c++;
		}
		i++;
	}
	return (1);
}

int	ft_format_char(char *str, char *base)
{
	int	j;
	int	c;
	int	lenbase;
	int	i;

	i = 0;
	lenbase = ft_strlen(base);
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		|| str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		j = 0;
		c = 0;
		while (base[j])
		{
			if (str[i] != base[j])
				c++;
			if (c == lenbase)
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
			|| (str[i] > 45 && str[i] < 127)) && ft_check_base(base) == 1)
	{
		if (i < ft_format_char(str, base))
			nb = nb * baselen + ft_find_index(str[i], base);
		i++;
	}
	return (nb * s);
}
//int	main(void)
//{
//	printf("%d",ft_atoi_base("125aa536", "0123456780"));
//}
