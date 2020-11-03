/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: earnaud <earnaud@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 12:57:37 by earnaud           #+#    #+#             */
/*   Updated: 2020/11/02 18:10:41 by earnaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft_H
#define libft_H
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(char *str, int c);
char    *ft_strrchr(char *str, int c);
int     ft_strncmp(char *str1, char *str2, int size);
char    *ft_strcpy(char *dest, char *src);
void    *ft_memset(void *str, int c, size_t n);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
#endif
