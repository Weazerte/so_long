/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:39:04 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/27 17:27:24 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#include "minilibx-linux/mlx.h"
#include "get_next_line/get_next_line.h"
#include "printf/ft_printf.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "libft/libft.h"
#include "/usr/include/X11/keysym.h"
#include <X11/X.h>

#define WIDTH 1920
#define HEIGHT 1080

	typedef struct s_win 
	{
		int	x;
		int	y;
		void	*mlx_ptr;
		void	*win_ptr;
	} t_win;

	typedef struct s_wall
	{
		void	*img_d_ptr;
		void	*img_u_ptr;
		void	*img_l_ptr;
		void	*img_r_ptr;
		void	*img_m_ptr;
		void	*img_dl_ptr;
		void	*img_dr_ptr;
		void	*img_ul_ptr;
		void	*img_ur_ptr;
	} t_wall;

	typedef struct s_coll
	{
		void	*img_coll1_ptr;
		void	*img_coll2_ptr;
		void	*img_coll3_ptr;
		void	*img_coll4_ptr;
	} t_coll;
	
	typedef struct s_exit
	{
		void	*img_1_ptr;
		void	*img_2_ptr;
		int	x;
		int	y;
		int	verif;
	} t_exit;
	
	typedef struct s_player
	{
		void	*img_player1_ptr;
		int	x;
		int	y;
	} t_player;
	
	typedef struct s_map
	{
		char	**map;
		char	*name;
		char	**map_unch;
	} t_map;
	typedef struct s_global
	{
		t_map map;
		t_win img;
		t_wall wall;
		t_coll coll;
		t_player player;
		t_exit exit;
	} t_global;
	
int	ft_fill_map(t_global *global);

int	main();

void	ft_free_map(char **map);

int	ft_check_collectables(char **map, int height, int width);

int	ft_check_exit(char **map, int height, int width);

int	ft_check_map(char **map, char *name);

int	ft_check_path(char **map, int height, int width);

int	ft_check_spawn(char **map, int height, int width);

int	ft_is_one(char **map, int height, int width);

int ft_is_rect(char **map, int width);

int	ft_len(char **map);

void	ft_pars(char **map, int x, int y);

int	ft_spawn_coord(char **map, int lenght, int width, char c);

char	*ft_get_all_line(int fd);

void	ft_wich_print(t_global *global, int i, int j);

int	deal_key(int key, t_global *global);

void	ft_print_map(t_global *global, int w);

int	ft_go_up(t_global *global);

int	ft_go_down(t_global *global);

int	ft_go_left(t_global *global);

int	ft_go_right(t_global *global);

int	ft_find_p(t_player *player, char **map);

void 	ft_count_coll(t_global *global);

void	ft_create_img(t_global *global);

int	ft_exit_the_game(t_global *global, int i);

void	ft_toff_p(t_global *global);

char	**ft_map_dup(char **map);

void	ft_print_wall(t_global *global, int i, int j);

void	ft_clear_wall(t_global *global);

void   ft_clear_exit(t_global *global);

void   ft_clear_coll(t_global *global);

void    ft_clear_player(t_global *global);

void	ft_init_img(t_global *global);

void	ft_init(t_global *global);

#endif