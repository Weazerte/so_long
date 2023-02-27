/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_the_game.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:12:03 by weaz              #+#    #+#             */
/*   Updated: 2023/02/09 11:44:03 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_exit_the_game(t_global *global, int i)
{
	if (i == 1)
		ft_printf("error_map\n");
	if (global->map.map)
		ft_free_map(global->map.map);
	if (global->map.map_unch)
		ft_free_map(global->map.map_unch);
	if (global->img.win_ptr)
		mlx_clear_window(global->img.mlx_ptr, global->img.win_ptr);
	if (global->img.win_ptr)
		mlx_destroy_window(global->img.mlx_ptr, global->img.win_ptr);
	ft_clear_coll(global);
	ft_clear_exit(global);
	ft_clear_player(global);
	ft_clear_wall(global);
	if (global->img.mlx_ptr)
		mlx_destroy_display(global->img.mlx_ptr);
	if (global->img.mlx_ptr)
		free(global->img.mlx_ptr);
	exit(0);
	return (0);
}
