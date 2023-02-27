/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_img.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:26:43 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/21 14:42:25 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_create_wall(t_global *global)
{
	global->wall.img_dl_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/wall_ur.xpm",
			&global->exit.x, &global->exit.y);
	global->wall.img_dr_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "./sprites/wall_ul.xpm",
			&global->exit.x, &global->exit.y);
	global->wall.img_l_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/wall_r.xpm",
			&global->exit.x, &global->exit.y);
	global->wall.img_r_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/wall_l.xpm",
			&global->exit.x, &global->exit.y);
	global->wall.img_u_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/wall_d.xpm",
			&global->exit.x, &global->exit.y);
	global->wall.img_ul_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/wall_dr.xpm",
			&global->exit.x, &global->exit.y);
	global->wall.img_ur_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/wall_dl.xpm",
			&global->exit.x, &global->exit.y);
	global->wall.img_m_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/wall_m.xpm",
			&global->exit.x, &global->exit.y);
}

void	ft_create_coll(t_global *global)
{
	global->coll.img_coll1_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/plant_01.xpm",
			&global->exit.x, &global->exit.y);
	global->coll.img_coll2_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/plant_02.xpm",
			&global->exit.x, &global->exit.y);
	global->coll.img_coll3_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/plant_03.xpm",
			&global->exit.x, &global->exit.y);
	global->coll.img_coll4_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/plant_04.xpm",
			&global->exit.x, &global->exit.y);
}

void	ft_create_img(t_global *global)
{
	ft_toff_p(global);
	global->exit.x = 64;
	global->exit.y = 64;
	ft_create_coll(global);
	ft_create_wall(global);
	global->exit.img_1_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/door_01.xpm",
			&global->exit.x, &global->exit.y);
	global->exit.img_2_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/door_02.xpm",
			&global->exit.x, &global->exit.y);
	global->player.img_player1_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/player_01.xpm",
			&global->exit.x, &global->exit.y);
	global->wall.img_d_ptr = mlx_xpm_file_to_image
		(global->img.mlx_ptr, "sprites/wall_u.xpm",
			&global->exit.x, &global->exit.y);
}
