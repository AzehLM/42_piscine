/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azeh <azeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:04:19 by gueberso          #+#    #+#             */
/*   Updated: 2024/08/14 10:10:31 by azeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strslen(char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	lensep;
	int	count;

	count = 0;
	i = 0;
	lensep = ft_strlen(sep);
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
			j++;
		count += j + lensep;
		i++;
		j = 0;
	}
	return (count - lensep);
}

char	*ft_strcat(char **strs, char *sep, char *result, int size)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (strs[++i] && i < size)
	{
		j = -1;
		while (strs[i][++j])
		{
			result[k] = strs[i][j];
			k++;
		}
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
		{
			result[k] = sep[j];
			k++;
			j++;
		}
	}
	result[k] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenstrs;
	char	*result;

	lenstrs = ft_strslen(strs, sep, size);
	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = '\0';
		return (result);
	}
	result = (char *)malloc(sizeof(char *) * lenstrs + 1);
	if (!result)
		return (NULL);
	result = ft_strcat(strs, sep, result, size);
	return (result);
}

#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	*join;
	char	*sep;
	char	*tab[6] = {"1", "2", "3", "4", "5", "6"};
	sep = "+";

	join = ft_strjoin(5, tab, sep);
	printf("'%s'\n", join);
	free(join);
	return (0);
}
