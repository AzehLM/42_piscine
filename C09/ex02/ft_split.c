/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 08:32:09 by gueberso          #+#    #+#             */
/*   Updated: 2024/10/18 19:40:11 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int	ft_check_charset(char c, char *charset)
{
	int	i;
	int	lenchar;

	lenchar = ft_strlen(charset);
	i = 0;
	while ((charset && charset[i]) && lenchar > 0)
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_count_str(char *str, char *charset)
{
	int	i;
	int	j;
	int	count;

	count = 0;
	i = 0;
	j = 0;
	while (str && str[i])
	{
		j = i;
		if (ft_check_charset(str[i], charset) == 1)
		{
			while (ft_check_charset(str[j], charset) != 0)
				j++;
			count++;
			i = j;
		}
		i++;
	}
	return (count);
}

char	*ft_strdup(char *src, char *charset, int *s)
{
	int		size;
	int		i;
	char	*dup;

	size = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (ft_check_charset(src[*s], charset) == 0)
		(*s)++;
	while (ft_check_charset(src[*s], charset) == 1 && src[*s])
	{
		dup[i] = src[*s];
		i++;
		*s = *s +1;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	int		s;
	char	**split;

	s = 0;
	i = 0;
	if (!charset || !charset[i])
	{
		split = malloc(sizeof(char *) * 2);
		split[0] = ft_strdup(str, charset, &s);
		split[1] = 0;
		return (split);
	}
	count = ft_count_str(str, charset);
	split = (char **)malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	while (i < count)
		split[i++] = ft_strdup(str, charset, &s);
	split[i] = 0;
	return (split);
}

#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	(void)ac;
	(void)av;
	char	**result;
	int		i = 0;
	char	*str = "est ce que ca marche";
	char	*charset = "e st";

	result = ft_split(str, charset);
	while (result[i])
	{
		printf("pos[%d] : '%s'\n", i, result[i]);
		free(result[i]);
        i++;
	}
	printf("pos[%d] : '%s'\n", i, result[i]);
	free(result);
	return (0);
}
