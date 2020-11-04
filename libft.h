/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:57:37 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/04 20:12:14 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_H
#define libft_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(char *str, int c);
char    *ft_strrchr(char *str, int c);
int     ft_strncmp(const char *str1,const char *str2,size_t n);
size_t	ft_strlcpy(char *dest,const char *src, size_t size);
void    *ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
#endif
