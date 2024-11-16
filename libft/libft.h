/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:05:34 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/13 19:52:59 by tamutlu          ###   ########.fr       */
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

#endif
