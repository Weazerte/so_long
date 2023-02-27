/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:28:17 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/27 17:27:59 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	int			result;
	t_global	global;

	if (ac == 2)
	{
		ft_init(&global);
		global.map.name = av[1];
		global.img.mlx_ptr = mlx_init();
		global.img.win_ptr = mlx_new_window
			(global.img.mlx_ptr, WIDTH, HEIGHT, "gayming");
		result = ft_fill_map(&global);
		global.map.map_unch = ft_map_dup(global.map.map);
		ft_create_img(&global);
		result += ft_check_map(global.map.map, av[1]);
		if (result == 0)
			ft_print_map(&global, 1);
		else
			ft_exit_the_game(&global, 1);
		mlx_hook(global.img.win_ptr, KeyPress,
			KeyPressMask, &deal_key, &global);
		mlx_hook(global.img.win_ptr, 17, 0L << 2, &ft_exit_the_game, &global),
		mlx_loop(global.img.mlx_ptr);
	}
	return (0);
}
