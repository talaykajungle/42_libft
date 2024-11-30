/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:46 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/30 18:35:58 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int main() {
//     // Test 1: Basic string test
//     char str1[15] = "Hello, World!";
//     printf("Test 1 - Basic string:\n");
//     printf("Before: %s\n", str1);
//     ft_memset(str1, '*', 5);
//     printf("After:  %s\n", str1);
//     printf("\n");

//     // Test 2: Zero-length set
//     char str2[15] = "Hello, World!";
//     printf("Test 2 - Zero-length set:\n");
//     printf("Before: %s\n", str2);
//     ft_memset(str2, 'x', 0);
//     printf("After:  %s\n", str2);
//     printf("\n");

//     // Test 3: Set entire array
//     char str3[10] = "ABCDEFGHIJ";
//     printf("Test 3 - Set entire array:\n");
//     printf("Before: ");
//     ft_memset(str3, 'A', sizeof(str3));
//     printf("After:  ");
//     printf("\n");

//     // Test 4: Set with null character
//     char str4[10] = "abcdefghi";
//     printf("Test 4 - Set with null character:\n");
//     printf("Before: ");
//     ft_memset(str4, '\0', 5);
//     printf("After:  ");
//     printf("\n");

//     // Test 5: Compare with standard memset
//     char str5a[20] = "Testing memset";
//     char str5b[20] = "Testing memset";
//     printf("Test 5 - Compare with standard memset:\n");
//     ft_memset(str5a, '-', 7);
//     memset(str5b, '-', 7);
//     printf("ft_memset:  %s\n", str5a);
//     printf("std memset: %s\n", str5b);
//     printf("ft_memset memory:  ");
//     printf("std memset memory: ");
//     printf("\n");

//     return (0);
// }
