/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:11:14 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/04 16:53:50 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_go_up(t_global *global)
{
	if (global->map.map[global->player.y - 1][global->player.x] == '1')
		return (0);
	if (global->map.map[global->player.y - 1][global->player.x] == 'E'
		&& global->exit.verif == 1)
		ft_exit_the_game(global, 0);
	ft_find_p(&global->player, global->map.map);
	global->map.map[global->player.y][global->player.x]
		= global->map.map_unch[global->player.y][global->player.x];
	mlx_clear_window(global->img.mlx_ptr, global->img.win_ptr);
	global->player.y -= 1;
	if (global->map.map_unch[global->player.y][global->player.x] == 'C')
		global->map.map_unch[global->player.y][global->player.x] = '0';
	global->map.map[global->player.y][global->player.x] = 'P';
	ft_count_coll(global);
	ft_print_map(global, 0);
	return (1);
}

int	ft_go_down(t_global *global)
{
	if (global->map.map[global->player.y + 1][global->player.x] == '1')
		return (0);
	if (global->map.map[global->player.y + 1][global->player.x] == 'E'
		&& global->exit.verif == 1)
		ft_exit_the_game(global, 0);
	ft_find_p(&global->player, global->map.map);
	global->map.map[global->player.y][global->player.x]
		= global->map.map_unch[global->player.y][global->player.x];
	mlx_clear_window(global->img.mlx_ptr, global->img.win_ptr);
	global->player.y += 1;
	if (global->map.map_unch[global->player.y][global->player.x] == 'C')
		global->map.map_unch[global->player.y][global->player.x] = '0';
	global->map.map[global->player.y][global->player.x] = 'P';
	ft_count_coll(global);
	ft_print_map(global, 0);
	return (1);
}

int	ft_go_left(t_global *global)
{
	if (global->map.map[global->player.y][global->player.x - 1] == '1')
		return (0);
	if (global->map.map[global->player.y][global->player.x - 1] == 'E'
		&& global->exit.verif == 1)
		ft_exit_the_game(global, 0);
	ft_find_p(&global->player, global->map.map);
	global->map.map[global->player.y][global->player.x]
		= global->map.map_unch[global->player.y][global->player.x];
	mlx_clear_window(global->img.mlx_ptr, global->img.win_ptr);
	global->player.x -= 1;
	if (global->map.map_unch[global->player.y][global->player.x] == 'C')
		global->map.map_unch[global->player.y][global->player.x] = '0';
	global->map.map[global->player.y][global->player.x] = 'P';
	ft_count_coll(global);
	ft_print_map(global, 0);
	return (1);
}

int	ft_go_right(t_global *global)
{
	if (global->map.map[global->player.y][global->player.x + 1] == '1')
		return (0);
	if (global->map.map[global->player.y][global->player.x + 1] == 'E'
		&& global->exit.verif == 1)
		ft_exit_the_game(global, 0);
	ft_find_p(&global->player, global->map.map);
	global->map.map[global->player.y][global->player.x]
		= global->map.map_unch[global->player.y][global->player.x];
	mlx_clear_window(global->img.mlx_ptr, global->img.win_ptr);
	global->player.x += 1;
	if (global->map.map_unch[global->player.y][global->player.x] == 'C')
		global->map.map_unch[global->player.y][global->player.x] = '0';
	global->map.map[global->player.y][global->player.x] = 'P';
	ft_count_coll(global);
	ft_print_map(global, 0);
	return (1);
}

int	deal_key(int key, t_global *global)
{
	static int	moovs = 0;
	int			verif;

	verif = moovs;
	if (key == XK_Escape)
		ft_exit_the_game(global, 0);
	else if (key == XK_w)
		moovs += ft_go_up(global);
	else if (key == XK_s)
		moovs += ft_go_down(global);
	else if (key == XK_a)
		moovs += ft_go_left(global);
	else if (key == XK_d)
		moovs += ft_go_right(global);
	if (moovs != verif)
		ft_printf("compte total de mouvement : %d \n", moovs);
	return (0);
}
