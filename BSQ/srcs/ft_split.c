/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:40:36 by samaouch          #+#    #+#             */
/*   Updated: 2024/07/24 19:51:43 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	count_words(char *str)
{
	int	count;
	int	in_word;
	int	i;

	i = 0;
	count = 0;
	in_word = 0;
	while (str && str[i])
	{
		if (str[i] != 10 && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		else if (str[i] == 10 && in_word == 1)
			in_word = 0;
		i++;
	}
	return (count);
}

char	*ft_strdup(char *str, int finish, int start)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ((finish - start) + 1));
	if (!dest)
		return (NULL);
	while (i < finish - start)
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	check_finish(char *str, int finish)
{
	while (str[finish] && str[finish] != 10)
		finish++;
	return (finish);
}

char	**ft_split(char *str)
{
	int		i;
	int		finish;
	int		start;
	int		count;
	char	**split;

	i = 0;
	start = 0;
	count = 0;
	split = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!split || !str)
		return (0);
	while (str[start])
	{
		while (str[start] == 10)
			start++;
		finish = start;
		finish = check_finish(str, finish);
		if (count < count_words(str))
			split[i++] = ft_strdup(str, finish, start);
		count++;
		start = finish;
	}
	split[i] = 0;
	return (split);
}

int	check_nb_line(char **split, struct s_map *map_values)
{
	int		i;
	int		len;
	char	*first_line;

	len = ft_strlen(split[0]);
	i = len - 1;
	first_line = malloc(sizeof(char) * (len + 1));
	if (!first_line)
		return (0);
	first_line = ft_strcpy(first_line, split[0]);
	while (i > len - 3)
	{
		first_line[i] = '\0';
		i--;
	}
	map_values[0].nline = ft_atoi(first_line);
	if (ft_identical_params(split) == -1)
		return (-1);
	if (ft_len(split) - 1 != map_values[0].nline)
		return (-1);
	return (0);
}
