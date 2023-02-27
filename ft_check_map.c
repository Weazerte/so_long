/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 17:07:52 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/21 14:47:57 by eaubry           ###   ########.fr       */
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

int	ft_check_map(char **map)
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
	i += ft_check_exit(copie, height, width);
	i += ft_check_spawn(copie, height, width);
	i += ft_check_collectables(copie, height, width);
	i += ft_check_path(copie, height, width);
	ft_free_map(copie);
	return (i);
}
