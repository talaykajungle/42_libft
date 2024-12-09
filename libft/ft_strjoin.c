/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:11:01 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/09 21:35:51 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	res = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[j++] = s2[i];
		i++;
	}
	res[j] = 0;
	return (res);
}

// int	main(void)
// {
// 	const char *s1 = "Hello, ";
// 	const char *s2 = "world!";
// 	char *result;

// 	result = ft_strjoin(s1, s2);
// 	if (result)
// 	{
// 		// Test case 1: Normal case
// 		printf("Test 1: Normal case\n");
// 		result = ft_strjoin("Hello, ", "world!");
// 		printf("Result: %s\n\n", result ? result : "NULL");
// 		free(result);

// 		// Test case 2: Empty strings
// 		printf("Test 2: Empty strings\n");
// 		result = ft_strjoin("", "");
// 		printf("Result: %s\n\n", result ? result : "NULL");
// 		free(result);

// 		// Test case 3: One empty string
// 		printf("Test 3: One empty string\n");
// 		result = ft_strjoin("Hello", "");
// 		printf("Result: %s\n\n", result ? result : "NULL");
// 		free(result);

// 		// Test case 4: Strings with spaces
// 		printf("Test 4: Strings with spaces\n");
// 		result = ft_strjoin("   Hello   ", "   world!   ");
// 		printf("Result: %s\n\n", result ? result : "NULL");
// 		free(result);

// 		// Test case 5: Long strings
// 		printf("Test 5: Long strings\n");
// result = ft_strjoin("This is a very long 
//string that goes on and on and on...",
// 	"And this is another very long string that continues forever...");
// 		printf("Result: %s\n\n", result ? result : "NULL");
// 		free(result);

// 		// Test case 6: NULL inputs (be careful, this
// 		//might crash if not handled)
// 		printf("Test 6: NULL inputs\n");
// 		result = ft_strjoin(NULL, "world");
// 		printf("Result (NULL, \"world\"): %s\n", result ? result : "NULL");
// 		free(result);

// 		result = ft_strjoin("Hello", NULL);
// 		printf("Result (\"Hello\", NULL): %s\n", result ? result : "NULL");
// 		free(result);

// 		result = ft_strjoin(NULL, NULL);
// 		printf("Result (NULL, NULL): %s\n\n", result ? result : "NULL");
// 		free(result);

// 		// Test case 7: Special characters
// 		printf("Test 7: Special characters\n");
// 		result = ft_strjoin("Hello\n", "World\t!");
// 		printf("Result: %s\n", result ? result : "NULL");
// 		free(result);
// 		return (0);
// 	}
// }