/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:08:03 by eaubry            #+#    #+#             */
/*   Updated: 2023/01/18 15:19:04 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);

int		ft_strchr_g(char *s, int c);

char	*ft_fill(char *str);

void	ft_buffer_copy(char *buff, char *str);

char	*ft_next(char *str);

char	*ft_strjoin_g(char *s1, char *s2, int i, int j);

char	*ft_strdup(char *src);

size_t	ft_strlen_g(const char *str);

int		ft_is_free(int size, char *buff);

#endif
