/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 11:29:08 by eaubry            #+#    #+#             */
/*   Updated: 2023/02/21 14:05:16 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	**ft_map_dup(char **map)
{
	int		i;
	int		j;
	int		height;
	char	**copie;

	if (!map)
		return (NULL);
	height = (int)ft_strlen(map[0]);
	copie = malloc(sizeof(char *) * (ft_len(map) + 1));
	if (!copie)
		return (NULL);
	i = -1;
	while (map[++i])
	{
		copie[i] = malloc (sizeof(char) * (height + 1));
		if (!copie[i])
			return (ft_free_map(copie), NULL);
		j = -1;
		while (map[i][++j])
			copie[i][j] = map[i][j];
		copie[i][j] = 0;
	}
	copie[i] = 0;
	return (copie);
}
