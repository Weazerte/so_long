/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 11:13:37 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/04 16:53:56 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_print_player(t_global *global)
{
	mlx_put_image_to_window
		(global->img.mlx_ptr, global->img.win_ptr,
			global->player.img_player1_ptr, global->img.x, global->img.y);
}

void	ft_print_coll(t_global *global)
{
	int	i;

	i = rand() % 4;
	if (i == 0)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr,
				global->coll.img_coll1_ptr, global->img.x, global->img.y);
	else if (i == 1)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr,
				global->coll.img_coll2_ptr, global->img.x, global->img.y);
	else if (i == 2)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr,
				global->coll.img_coll3_ptr, global->img.x, global->img.y);
	else if (i == 3)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr,
				global->coll.img_coll4_ptr, global->img.x, global->img.y);
}

void	ft_print_exit(t_global *global)
{
	if (global->exit.verif == 0)
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr
				, global->exit.img_1_ptr, global->img.x, global->img.y);
	else
		mlx_put_image_to_window
			(global->img.mlx_ptr, global->img.win_ptr
				, global->exit.img_2_ptr, global->img.x, global->img.y);
}

void	ft_wich_print(t_global *global, int i, int j)
{
	if (global->map.map[i][j] == '1')
		ft_print_wall(global, i, j);
	else if (global->map.map[i][j] == 'P')
		ft_print_player(global);
	else if (global->map.map[i][j] == 'C')
		ft_print_coll(global);
	else if (global->map.map[i][j] == 'E')
		ft_print_exit(global);
}

void	ft_print_map(t_global *global, int w)
{
	int	i;
	int	j;

	if (w == 1)
		ft_printf("map valid\n");
	i = 0;
	ft_find_p(&global->player, global->map.map);
	global->img.y = (global->player.y * -64) + HEIGHT / 2;
	while (global->map.map[i])
	{
		j = 0;
		global->img.x = (global->player.x * -64) + WIDTH / 2;
		while (global->map.map[i][j])
		{
			ft_wich_print(global, i, j);
			j++;
			global->img.x += 64;
		}
		i++;
		global->img.y += 64;
	}
}
