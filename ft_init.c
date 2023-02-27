/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:46:27 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/21 10:17:59 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_init_player(t_global *global)
{
	global->player.img_player1_ptr = NULL;
}

static void	ft_init_coll(t_global *global)
{
	global->coll.img_coll1_ptr = NULL;
	global->coll.img_coll2_ptr = NULL;
	global->coll.img_coll3_ptr = NULL;
	global->coll.img_coll4_ptr = NULL;
}

static void	ft_init_exit(t_global *global)
{
	global->exit.img_1_ptr = NULL;
	global->exit.img_1_ptr = NULL;
	global->exit.verif = 0;
	global->exit.x = 0;
	global->exit.y = 0;
}

static void	ft_init_wall(t_global *global)
{
	global->wall.img_d_ptr = NULL;
	global->wall.img_u_ptr = NULL;
	global->wall.img_l_ptr = NULL;
	global->wall.img_r_ptr = NULL;
	global->wall.img_m_ptr = NULL;
	global->wall.img_dl_ptr = NULL;
	global->wall.img_dr_ptr = NULL;
	global->wall.img_ul_ptr = NULL;
	global->wall.img_ur_ptr = NULL;
}

void	ft_init(t_global *global)
{
	ft_init_player(global);
	ft_init_coll(global);
	ft_init_exit(global);
	ft_init_img(global);
	ft_init_wall(global);
}
