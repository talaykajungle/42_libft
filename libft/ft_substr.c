/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:54:19 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/08 11:28:36 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	slen;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	slen = ft_strlen(s);
	if (len > slen - start)
		len = slen - start;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// Main function to test ft_substr
// int main() {
//     const char *str = "Hello, World!";

//     // Test case 1: Normal case
//     char *substr1 = ft_substr(str, 7, 5);
//     printf("Substring 1: '%s'\n", substr1); // Expected: "World"
//     free(substr1);

//     // Test case 2: Start index is greater than string length
//     char *substr2 = ft_substr(str, 20, 5);
//     printf("Substring 2: '%s'\n", substr2); // Expected: ""
//     free(substr2);

//
//	Test case 3: Start index is within bounds
//	but length exceeds remaining string

//     char *substr3 = ft_substr(str, 0, 20);
//     printf("Substring 3: '%s'\n", substr3); // Expected: "Hello, World!"
//     free(substr3);

//     // Test case 4: Start index is 0
//     char *substr4 = ft_substr(str, 0, 5);
//     printf("Substring 4: '%s'\n", substr4); // Expected: "Hello"
//     free(substr4);

//     // Test case 5: Start index is at the end of the string
//     char *substr5 = ft_substr(str, 13, 5);
//     printf("Substring 5: '%s'\n", substr5); // Expected: ""
//     free(substr5);

//     // Test case 6: NULL input
//     char *substr6 = ft_substr(NULL, 0, 5);
//     printf("Substring 6: '%s'\n", substr6); // Expected: "(null)"
//     free(substr6);

//     return (0);
// }

// int main()
// {
// 	int i = 39;
// 	int len = 40;
// 	const char s[] = "my name is atikopati how are you doing ?";
// 	printf("my: %s\n",ft_substr(s,i,len));
// }