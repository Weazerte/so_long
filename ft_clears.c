/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clears.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:33:29 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/04 16:06:28 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_clear_player(t_global *global)
{
	if (global->player.img_player1_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->player.img_player1_ptr);
}

void	ft_clear_coll(t_global *global)
{
	if (global->coll.img_coll1_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->coll.img_coll1_ptr);
	if (global->coll.img_coll2_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->coll.img_coll2_ptr);
	if (global->coll.img_coll3_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->coll.img_coll3_ptr);
	if (global->coll.img_coll4_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->coll.img_coll4_ptr);
}

void	ft_clear_exit(t_global *global)
{
	if (global->exit.img_1_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->exit.img_1_ptr);
	if (global->exit.img_2_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->exit.img_2_ptr);
}

void	ft_clear_wall(t_global *global)
{
	if (global->wall.img_d_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_d_ptr);
	if (global->wall.img_dl_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_dl_ptr);
	if (global->wall.img_dr_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_dr_ptr);
	if (global->wall.img_l_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_l_ptr);
	if (global->wall.img_m_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_m_ptr);
	if (global->wall.img_r_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_r_ptr);
	if (global->wall.img_u_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_u_ptr);
	if (global->wall.img_ul_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_ul_ptr);
	if (global->wall.img_ur_ptr)
		mlx_destroy_image(global->img.mlx_ptr, global->wall.img_ur_ptr);
}
