/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:59 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/30 18:58:49 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    
    unsigned char *ptr1;
    unsigned char *ptr2;

    ptr1 =  (unsigned char*)s1;
    ptr2 =  (unsigned char*)s2;
    
    while(n > 0) {
        if(*s1 != *s2)
        {
            return(unsigned char)*s1 - (unsigned char)*s2;
        }
        if (*s1 == '\0')
		{
            return 0;
        }
        s1++;
        s2++;
        n--;
    }
    return 0;}
