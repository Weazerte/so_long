/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_wall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:14:22 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/04 16:44:42 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_print_corner(t_global *global, int i, int j)
{
	if (i == 0 && j == 0)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr,
				global->wall.img_dr_ptr, global->img.x, global->img.y);
	else if (i == 0 && j == (int)ft_strlen(global->map.map[i]) - 1)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr,
				global->wall.img_dl_ptr, global->img.x, global->img.y);
	else if (i == ft_len(global->map.map) - 1 && j == 0)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr,
				global->wall.img_ur_ptr, global->img.x, global->img.y);
	else if (i == ft_len(global->map.map) - 1 && j
		== (int)ft_strlen(global->map.map[i]) - 1)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr,
				global->wall.img_ul_ptr, global->img.x, global->img.y);
	else
		return (0);
	return (1);
}

void	ft_print_wall(t_global *global, int i, int j)
{
	if (ft_print_corner(global, i, j) == 0)
	{
		if (j == 0)
			mlx_put_image_to_window
				(global->img.mlx_ptr, global->img.win_ptr,
					global->wall.img_r_ptr, global->img.x, global->img.y);
		else if (j == (int)ft_strlen(global->map.map[i]) - 1)
			mlx_put_image_to_window
				(global->img.mlx_ptr, global->img.win_ptr,
					global->wall.img_l_ptr, global->img.x, global->img.y);
		else if (i == 0)
			mlx_put_image_to_window
				(global->img.mlx_ptr, global->img.win_ptr,
					global->wall.img_d_ptr, global->img.x, global->img.y);
		else if (i == ft_len(global->map.map) - 1)
			mlx_put_image_to_window
				(global->img.mlx_ptr, global->img.win_ptr,
					global->wall.img_u_ptr, global->img.x, global->img.y);
		else
			mlx_put_image_to_window
				(global->img.mlx_ptr, global->img.win_ptr,
					global->wall.img_m_ptr, global->img.x, global->img.y);
	}
}
