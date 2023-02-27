/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pars.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:06:31 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/04 15:45:20 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_pars(char **map, int x, int y)
{
	if (x < 0 && x > ft_len(map) && y < 0 && y >= (int)ft_strlen(map[0]))
		return ;
	if (map[x][y] != 'C' && map[x][y] != 'P' && map[x][y] != 'E'
		&& map[x][y] != '0')
		return ;
	map[x][y] = '1';
	ft_pars(map, x + 1, y);
	ft_pars(map, x - 1, y);
	ft_pars(map, x, y + 1);
	ft_pars(map, x, y - 1);
}
