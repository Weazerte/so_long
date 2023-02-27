/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spawn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:03:49 by eaubry            #+#    #+#             */
/*   Updated: 2023/01/24 13:11:25 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_spawn(char **map, int lenght, int width)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < lenght)
	{
		j = 0;
		while (j < width)
		{
			if (map[i][j] == 'P')
				count++;
			if (count > 1)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
