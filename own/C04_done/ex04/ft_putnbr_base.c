/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kporceil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:06:22 by kporceil          #+#    #+#             */
/*   Updated: 2024/07/09 23:17:30 by kporceil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
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
			|| (base[i] >= 9 && base[i] <= 13))
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

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	nb;
	int				lenbase;

	nb = (long long int) nbr ;
	lenbase = ft_strlen(base);
	if (check_base(base) != 1)
		return ;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= lenbase)
	{
		ft_putnbr_base(nb / lenbase, base);
		write(1, &base[nb % lenbase], 1);
	}
	else
		write(1, &base[nb % lenbase], 1);
}

//int	main(void)
//{
//	char	base[] = "01";
//	ft_putnbr_base(-2147483648, base);
//}
