/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:06:51 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/04 15:57:53 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_path(char **map, int lenght, int width)
{
	int	i;
	int	j;

	ft_pars(map, ft_spawn_coord(map, lenght, width, 'x'),
		ft_spawn_coord(map, lenght, width, 'y'));
	i = 0;
	while (i < lenght)
	{
		j = 0;
		while (j < width)
		{
			if (map[i][j] != '1' && map[i][j] != '0' )
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
