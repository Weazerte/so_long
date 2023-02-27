/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:56:28 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/21 10:17:26 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_init_img(t_global *global)
{
	global->img.mlx_ptr = NULL;
	global->img.win_ptr = NULL;
	global->img.x = 0;
	global->img.y = 0;
}
