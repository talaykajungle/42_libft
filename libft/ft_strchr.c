/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:51 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/10 12:03:36 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main(void)
// {
//     // Test cases
//     const char *test_str1 = "Hello, World!";
//     const char *test_str2 = "";
//     int test_char1 = 'o';
//     int test_char2 = 'z';
//     int test_char3 = '\0';

//     // Test case 1: Normal case
//     char *result1 = ft_strchr(test_str1, test_char1);
//     printf("Test 1 (normal case): %s\n", result1 ? result1 : "NULL");

//     // Test case 2: Character not found
//     char *result2 = ft_strchr(test_str1, test_char2);
//     printf("Test 2 (char not found): %s\n", result2 ? result2 : "NULL");

//     // Test case 3: Null terminator
//     char *result3 = ft_strchr(test_str1, test_char3);
//     printf("Test 3 (null terminator): %s\n", result3 ? "Found" : "NULL");

//     // Test case 4: Empty string
//     char *result4 = ft_strchr(test_str2, test_char1);
//     printf("Test 4 (empty string): %s\n", result4 ? result4 : "NULL");

//     // Test case 5: NULL input string (edge case)
//     char *result5 = ft_strchr(NULL, test_char1);
//     printf("Test 5 (NULL input): %s\n", result5 ? result5 : "NULL");

//     return (0);
// }