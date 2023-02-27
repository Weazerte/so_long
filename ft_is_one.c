/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:06:17 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/21 14:37:20 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_is_one(char **map, int lenght, int width)
{
	int	i;
	int	j;

	i = 0;
	width--;
	while (i < lenght)
	{
		if (map[i][0] != '1' || map[i][width] != '1')
			return (1);
		j = -1;
		while (++j <= width)
		{
			if (i == 0 || i == lenght - 1)
			{
				if (map[i][j] != '1')
					return (1);
			}
		}
		i++;
	}
	return (0);
}
