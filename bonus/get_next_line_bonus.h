/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:56:34 by tat-nguy          #+#    #+#             */
/*   Updated: 2024/11/27 15:09:16 by tat-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

	#ifndef BUFFER_SIZE
	# define BUFFER_SIZE 42
	#endif

/*
** :::::::::::::::::::::::::::::::::* HEADERS *:::::::::::::::::::::::::::::: **
*/

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/*
** ::::::::::::::::::::::::::* FUNCTION PROTOTYPES *::::::::::::::::::::::::: **
*/

/*
**	get_next_line_bonus.c
*/

char	*get_next_line(int fd);
char	*ft_read_file(int fd, char *rest);
char	*ft_line(char *buffer);
char	*ft_remain(char *buffer);
char	*ft_lineappend(char *remain, char *buffer);

/*
**	get_next_line_utils_bonus.c
*/

size_t	ft_strlen(char *str);
void	*ft_calloc(unsigned int nmemb, unsigned int size);
char	*ft_strchr(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);

#endif