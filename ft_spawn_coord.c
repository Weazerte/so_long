/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spawn_coord.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:04:35 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/04 16:13:01 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_spawn_coord(char **map, int lenght, int width, char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < lenght)
	{
		j = 0;
		while (j < width)
		{
			if (map[i][j] == 'P')
			{
				if (c == 'x')
					return (i);
				else
					return (j);
			}
			j++;
		}
		i++;
	}
	return (0);
}
