/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:59 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/28 17:21:20 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t i = 0;
	
// 	if(n == 0)
// 		return 0;
	
// 	while(i < n)
// 	{
// 		if(s1[i] != s2[i])
// 		{
// 			return(unsigned char)s1[i] - (unsigned char)s2[i];
// 		}
// 		if(s1[i] == '\0' && s2[i] == '\0')
// 		{
// 			break;
// 		}
// 		i++;
// 	}
// 	if (i == n)
//         return 0; // Equal up to n characters
//     return (unsigned char)s1[i] - (unsigned char)s2[i];		
// }

int ft_strncmp(const char *s1, const char *s2, size_t n) {
    while (n > 0) {
        if (*s1 != *s2) {
            return (unsigned char)*s1 - (unsigned char)*s2; // Return the difference
        }
        if (*s1 == '\0') {
            return 0; // Both strings are equal up to this point
        }
        s1++;
        s2++;
        n--;
    }
    return 0; // Strings are equal up to n characters
}

int main() {

    const char *str1 = "Hello, World!";
    const char *str2 = "Hello, World!";
    const char *str3 = "Hello, world!";
    const char *str4 = "Hello, W";
    const char *str5 = "Hello, World! Extra text";
    const char *str6 = "Hello, W";


    // Test cases

    printf("Comparing '%s' and '%s' for 13 characters: %d\n", str1, str2, ft_strncmp(str1, str2, 13)); // Should be 0
    printf("Comparing '%s' and '%s' for 13 characters: %d\n", str1, str3, ft_strncmp(str1, str3, 13)); // Should be negative
    printf("Comparing '%s' and '%s' for 5 characters: %d\n", str1, str4, ft_strncmp(str1, str4, 5)); // Should be 0
    printf("Comparing '%s' and '%s' for 10 characters: %d\n", str1, str4, ft_strncmp(str1, str4, 10)); // Should be positive
    printf("Comparing '%s' and '%s' for 20 characters: %d\n", str1, str5, ft_strncmp(str1, str5, 20)); // Should be negative
    printf("Comparing '%s' and '%s' for 10 characters: %d\n", str1, str6, ft_strncmp(str1, str6, 10)); // Should be positive
	
    return 0;

}