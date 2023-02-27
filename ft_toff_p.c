/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toff_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:15:24 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/21 14:44:05 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_toff_p(t_global *global)
{
	int	res;

	res = 0;
	if (global->map.map == NULL)
		return ;
	if (ft_find_p(&global->player, global->map.map) == 0)
		global->map.map_unch[global->player.y][global->player.x] = '0';
}
