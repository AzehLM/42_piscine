/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 17:29:54 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/21 21:47:35 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_get_nline(char **strs)
{
	int	i;

	i = 0;
	while (strs != NULL && strs[i])
		i++;
	return (i);
}

char	**ft_read_dico(char *path)
{
	char	buffer[1024];
	int		fd;
	int		bytes_read;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_read = read(fd, buffer, sizeof(buffer));
	if (bytes_read == -1)
		return (0);
	return (ft_split(buffer, "\n"));
}

char	*ft_get_value(char *str, int *i)
{
	char	*res;
	int		j;

	j = 0;
	if (str[*i] && !(str[*i] >= '0' && str[*i] <= '9'))
		return (NULL);
	while (str[*i] >= '0' && str[*i] <= '9')
		*i += 1;
	j = *i;
	while (str[*i] == ' ')
		*i += 1;
	if (str[*i] != ':')
		return (NULL);
	res = ft_strndup(str, j);
	*i += 1;
	return (res);
}

char	*ft_get_str(char *str, int *i)
{
	char	*res;
	int		j;

	j = 0;
	if (!str[*i])
		return (NULL);
	while (str[*i] && str[*i] == ' ')
		*i += 1;
	if (!ft_is_printable(str[*i]))
		return (NULL);
	j = *i;
	while (ft_is_printable(str[j]))
		j++;
	res = ft_strndup(&str[*i], j);
	return (res);
}

struct s_dico	*ft_parse_string_to_tab(char **str)
{
	t_dico	*dico;
	int		i;
	int		j;
	int		line;

	i = 0;
	j = 0;
	line = ft_get_nline(str);
	dico = malloc(sizeof(t_dico) * (line + 1));
	if (!dico)
		return (NULL);
	while (str != NULL && str[j])
	{
		i = 0;
		dico[j].val = ft_get_value(str[j], &i);
		if (dico[j].val == NULL)
			return (NULL);
		dico[j].str = ft_get_str(str[j], &i);
		if (dico[j].str == NULL)
			return (NULL);
		j++;
	}
	dico[j].val = 0;
	return (dico);
}
