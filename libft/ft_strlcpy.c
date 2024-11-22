/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:55 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/22 17:03:13 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;
	
	i = 0;
	len = 0;
	while(src[len])
		len++;
	if(size == 0)
		return (len);
	while (src[i] && i <(size -1))
		dest[i] = src[i];
		i++;
	dest[i]= '\0';
	return (len);
}

// int main(void)
// {
//     char dest[20];
//     const char *src;
//     size_t result;

//     // Test case 1: Normal case
//     src = "Hello, World!";
//     result = ft_strlcpy(dest, src, sizeof(dest));
//     printf("1. Normal case:\n   src: %s\n   dest: %s\n   result: %zu\n\n", src, dest, result);

//     // Test case 2: Empty source string
//     src = "";
//     result = ft_strlcpy(dest, src, sizeof(dest));
//     printf("2. Empty source:\n   src: %s\n   dest: %s\n   result: %zu\n\n", src, dest, result);

//     // Test case 3: Size is 0
//     src = "Test";
//     result = ft_strlcpy(dest, src, 0);
//     printf("3. Size is 0:\n   src: %s\n   dest: %s\n   result: %zu\n\n", src, dest, result);

//     // Test case 4: Size is 1
//     src = "Test";
//     result = ft_strlcpy(dest, src, 1);
//     printf("4. Size is 1:\n   src: %s\n   dest: %s\n   result: %zu\n\n", src, dest, result);

//     // Test case 5: Source longer than destination
//     src = "This is a very long string";
//     result = ft_strlcpy(dest, src, 10);
//     printf("5. Long source:\n   src: %s\n   dest: %s\n   result: %zu\n\n", src, dest, result);

//     // Test case 6: Exact fit
//     src = "Exact";
//     result = ft_strlcpy(dest, src, 6);
//     printf("6. Exact fit:\n   src: %s\n   dest: %s\n   result: %zu\n\n", src, dest, result);

//     return 0;
// }

