/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:44 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/20 21:01:03 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s)
        return dest;

    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;
        while (n--)
            *--d = *--s;
    }
return dest;
}

int main() {
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    printf("Before: %s\n", str);
    
    // This should move "defghijklm" to overlap with "abcdefghij"
	ft_memmove(str, str + 3, 10);
    
    printf("After:  %s\n", str);
    printf("Expected: defghijklmnopqrstuvwxyz\n");

    
}
