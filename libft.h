/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: edribeir <edribeir@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 12:31:26 by edribeir      #+#    #+#                 */
/*   Updated: 2023/10/27 11:40:12 by edribeir      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// standard functions
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <stddef.h> 
# include <bsd/string.h> 
# include <limits.h>
# include <unistd.h>

// Character Function
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);

// // String functions
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *str, const char *str1, size_t n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int c);
char	**ft_split(char const *s, char c);
void	ft_bzero(void *s, size_t n);

// Write Functions
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);

// Memory Functions
void	*ft_memset(void *s, int c, size_t nbytes);
void	*ft_memmove(void *dst, const void *src, size_t nbytes);
void	*ft_memcpy(void *dst, const void *src, size_t nbytes);
int		ft_memcmp(const void *str1, const void *str2, size_t nbytes);
void	*ft_memchr(const void *s, int c, size_t nbytes);
void	*ft_calloc(size_t nitems, size_t sizeitem);

// Math functions
char	*ft_itoa(int n);
int		ft_atoi(const char *str);

#endif
