/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:42:46 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/27 17:38:21 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_find_p(t_player *player, char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == 'P')
			{
				player->y = i;
				player->x = j;
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_get_all_line(int fd)
{
	char	*stash;
	char	*all;
	char	*tmp;

	all = get_next_line(fd);
	if (!all)
		return (NULL);
	stash = NULL;
	tmp = NULL;
	while (1)
	{
		stash = get_next_line(fd);
		if (stash == NULL)
			break ;
		tmp = ft_strjoin(all, stash);
		free(stash);
		free(all);
		all = tmp;
	}
	return (all);
}

int	ft_check_dline(char *s)
{
	int	i;

	i = 0;
	while (s[i + 1])
	{
		if (s[i] == '\n' && s[i + 1] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_fill_map(t_global *global)
{
	char	*all;
	int		fd;
	char	**tmp;
	int		res;

	res = 0;
	fd = open(global->map.name, O_RDONLY);
	if (fd == -1)
		return (1);
	all = ft_get_all_line(fd);
	if (!all)
		return (1);
	if (ft_check_dline(all) == 1)
		res++;
	tmp = ft_split(all, '\n');
	close(fd);
	global->map.map = tmp;
	return (res);
}
