/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_exit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:02:45 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/27 16:18:59 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_exit(char **map, int lenght, int width)
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
			if (map[i][j] == 'E')
				count++;
			if (count > 1)
				return (1);
			j++;
		}
		i++;
	}
	if (count == 0)
		return (1);
	return (0);
}
