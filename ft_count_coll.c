/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_coll.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 11:11:35 by weaz              #+#    #+#             */
/*   Updated: 2023/02/04 14:48:01 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_count_coll(t_global *global)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (global->map.map[i])
	{
		j = 0;
		while (global->map.map[i][j])
		{
			if (global->map.map[i][j] == 'C')
				count++;
			j++;
		}
		i++;
	}
	if (count == 0)
		global->exit.verif = 1;
	else
		global->exit.verif = 0;
}
