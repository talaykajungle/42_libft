/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:53 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/30 21:15:18 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (size < dstlen)
		return (size + srclen);
	i = 0;
	while (src[i] != '\0' && (dstlen + i) < (size - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// void	test_ft_strlcat(char *dst, const char *src, size_t size,
// 		const char *expected_dst, size_t expected_return)
// {
// 	char	original_dst[100];
// 	size_t	result;

// 	strcpy(original_dst, dst); // Save the original dst for comparison
// 	result = ft_strlcat(dst, src, size);
// 	printf("Test with dst=\"%s\", src=\"%s\", size=%zu:\n", original_dst, src,
// 		size);
// 	printf("Resulting dst: \"%s\"\n", dst);
// 	printf("Expected dst: \"%s\"\n", expected_dst);
// 	printf("Result: %zu, Expected: %zu\n", result, expected_return);
// 	printf("Test %s\n\n", (strcmp(dst, expected_dst) == 0
// 			&& result == expected_return) ? "PASSED" : "FAILED");
// }

// int	main(void)
// {
// 	char	dst1[100] = "";
// 	char	dst2[100] = "Hello";
// 	char	dst3[100] = "";
// 	char	dst4[100] = "Hello";
// 	char	dst5[100] = "Hello";
// 	char	dst6[100] = "Hello";
// 	char	dst7[100] = "Hello";
// 	char	dst8[100] = "A";
// 	char	dst9[100] = "Hello";
// 	char	dst10[100] = "Hello";
// 	char	dst11[100] = "Hello";

// 	//     // Edge cases
// 	test_ft_strlcat(dst1, "", 1, "", 0);
// 	test_ft_strlcat(dst2, "", 10, "Hello", 5);
// 	test_ft_strlcat(dst3, "World", 10, "World", 5);
// 	test_ft_strlcat(dst4, "World", 3, "Hello", 8);
// 	test_ft_strlcat(dst5, "World", 5, "Hello", 10);
// 	test_ft_strlcat(dst6, "World", 12, "HelloWorld", 10);
// 	test_ft_strlcat(dst7, "World", 8, "HelloWo", 10);
// 	test_ft_strlcat(dst8, "B", 2, "AB", 3);
// 	test_ft_strlcat(dst9, "WorldWorldWorld", 10, "HelloWorl", 22);
// 	test_ft_strlcat(dst10, "!@#$%", 10, "Hello!@#$%", 10);
// 	test_ft_strlcat(dst11, "World", 100, "HelloWorld", 10);
// 	return (0);
// }
