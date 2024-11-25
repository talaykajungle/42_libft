/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:53 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/25 20:07:11 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dstlen;
	size_t srclen;

// Calculating the length of the strings
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);

// Check for buffer size (Block of memory that is storen temporarily that will be transferred)
	if(size < dstlen)
		return(size + srclen);
	i = 0;
// Append characters need to use a loop
	while(src[i] != '\0' && (dstlen + i) < (size -1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return(dstlen + srclen);
}

int main()
{
// Empty destination string
	char dst[10] = "";
	char *src = "Hello";
	size_t result = ft_strlcat(dst, src, 10);
	// Expected: dst = "Hello", result = 5

// Empty source string
	char dst[10] = "Hello";
	char *src = "";
	size_t result = ft_strlcat(dst, src, 10);
	// Expected: dst = "Hello", result = 5

// Size is 0
	char dest[10] = "Hello";
	char *src = "";
	size_t result = ft_strlcat(dest, src, 10);
}