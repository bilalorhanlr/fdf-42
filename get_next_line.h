/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilalorhanlar <bilalorhanlar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:07:57 by bilalorhanl       #+#    #+#             */
/*   Updated: 2023/10/29 16:07:58 by bilalorhanl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5000
# endif

char	*ft_strjoin1(char *s1, char *s2);
char	*ft_strchr1(char *s, int c);
size_t	ft_strlen1(char *str);
char	*read_line(int fd, char *main_line);
char	*return_line(char *main_line);
char	*next_line(char *main_line);
char	*get_next_line(int fd);

#endif
