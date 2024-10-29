/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgutie <jorgutie@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:52:28 by jorgutie          #+#    #+#             */
/*   Updated: 2024/10/28 17:05:17 by jorgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <string.h>

// Headers for Open, Close and Error Functions
# include <fcntl.h>  // For open()
# include <unistd.h> // For close()
# include <stdio.h>  // For perror()

// Definning the Buffer Size
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

// Prototyped functions
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t n);
char	*ft_cleanup_return(char **stash, char *line);
char	*ft_obtain_line(char **stash);
char	*read_to_stash(int fd, char *stash);
char	*get_next_line(int fd);

#endif