/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:55:39 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/09 15:06:30 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	ft_size_word(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		size++;
		i++;
	}
	return (size);
}

static void	ft_free(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;
	int		size;
	int		j;

	i = 0;
	j = -1;
	str = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++j < ft_count(s, c))
	{
		while (s[i] == c)
			i++;
		size = ft_size_word(s, c, i);
		str[j] = ft_substr(s, i, size);
		if (!str[j])
		{
			ft_free(str, j);
			return (NULL);
		}
		i += size;
	}
	str[j] = 0;
	return (str);
}

// int	main(void)
// {
// 	char **result;
// 	char *test_strings[] = {
// 		"Hello,World,This,Is,A,Test",   // Normal case
// 		"Hello,,World",                 // Consecutive delimiters
// 		"Hello",                        // Single word
// 		"",                             // Empty string
// 		"   ",                          // String with only spaces
// 		"Hello World",                  // Space as delimiter
// 		"Hello,World,This,Is,A,Test,",  // Trailing delimiter
// 		",Hello,World,This,Is,A,Test",  // Leading delimiter
// 		"Hello,World,This,Is,A,Test,,", // Trailing and consecutive delimiters
// 		NULL                            // End of test cases
// 	};
// 	char delimiters[] = {',', ' ', ' ', ' ', ' ', ' ', ',', ',', ',', ',', ' '};
// 	for (int i = 0; test_strings[i] != NULL; i++)
// 	{
// 		printf("Testing: \"%s\" with delimiter '%c'\n", test_strings[i],
// 			delimiters[i]);
// 		result = ft_split(test_strings[i], delimiters[i]);
// 		if (result)
// 		{
// 			for (int j = 0; result[j] != NULL; j++)
// 			{
// 				printf("Word %d: \"%s\"\n", j, result[j]);
// 				free(result[j]); // Free each allocated string
// 			}
// 			free(result); // Free the array of strings
// 		}
// 		else
// 		{
// 			printf("Result: NULL (Memory allocation failed or empty input)\n");
// 		}
// 		printf("\n");
// 	}
// 	return (0);
// }