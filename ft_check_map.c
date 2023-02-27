/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:07:52 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/27 17:01:04 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print(char **map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		ft_printf("%s\n", map[i]);
		i++;
	}
	ft_printf("\n");
}

int	ft_check_name(char *name)
{
	int	len;
	int	i;

	len = (int)ft_strlen(name);
	i = len - 4;
	if (name[i] == '.')
	{
		if (name[++i] == 'b')
		{
			if (name[++i] == 'e')
			{
				if (name[++i] == 'r')
					return (0);
			}
		}
	}
	return (1);
}

int	ft_check_map(char **map, char *name)
{
	int		i;
	int		height;
	int		width;
	char	**copie;

	i = 0;
	if (!map)
		return (1);
	height = ft_len(map);
	width = (int)ft_strlen(map[0]);
	if (ft_is_rect(map, width) == 1)
		return (1);
	if (ft_is_one(map, height, width) == 1)
		return (1);
	copie = ft_map_dup(map);
	i += ft_check_name(name);
	i += ft_check_exit(copie, height, width);
	i += ft_check_spawn(copie, height, width);
	i += ft_check_collectables(copie, height, width);
	i += ft_check_path(copie, height, width);
	ft_free_map(copie);
	return (i);
}
