/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:05:34 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/14 17:19:11 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
}

t_list;

typedef struct s_split_next
{
	size_t start;
	size_t end;
}

t_split_next;

size_t ft_strlen(const char *s);
int ft_isalnum(int c);
int ft_atoi(const char *str);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strchr(const char *s, int c);



#endif
