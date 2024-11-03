/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gueberso <gueberso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 18:20:56 by gueberso          #+#    #+#             */
/*   Updated: 2024/07/21 22:01:39 by gueberso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_is_exist(t_dico *dict, char *to_find)
{
	int	i;

	i = 0;
	while (dict != NULL && dict[i].val != 0)
	{
		if (ft_strcmp(to_find, dict[i].val) == 0)
			return (dict[i].str);
		i++;
	}
	return (NULL);
}

char	*ft_read_packet(char *str, int index)
{
	return (ft_strndup(&str[index], 3));
}

int	ft_print_numbers(char *path, char *val)
{
	char	**split_dict;
	t_dico	*dict;

	if (path == NULL)
		split_dict = ft_read_dico("numbers.dict");
	else
		split_dict = ft_read_dico(path);
	if (split_dict == 0)
		return (-1);
	dict = ft_parse_string_to_tab(split_dict);
	if (dict == NULL)
		return (-2);
	ft_putstr(ft_is_exist(dict, val));
	return (0);
}
