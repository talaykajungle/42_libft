/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:55:39 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/08 19:46:35 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

int	remove_all(char **array, int j)
{
	while (j > 0)
		free(array[--j]);
	free(array);
	return (-1);
}

int	copy_one(char **array, int c, int i, char const *s)
{
	int	word_len;

	word_len = 0;
	while (s[i + word_len] != '\0' && s[i + word_len] != c)
		word_len++;
	*array = (char *)malloc(sizeof(char) * (word_len + 1));
	if (!array)
		return (-1);
	return (word_len);
}

int	copyarray(char **array, char c, char const *s)
{
	int	i;
	int	j;
	int	counter_a;
	int	word_len;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		counter_a = 0;
		if (s[i] != c)
		{
			word_len = copy_one(&array[j], c, i, s);
			if (word_len == -1)
				return (remove_all(array, j));
			while (counter_a < word_len)
				array[j][counter_a++] = s[i++];
			array[j++][counter_a] = '\0';
		}
		else
			i++;
	}
	array[j] = NULL;
	return (word_len);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		result;

	if (!s)
		return (NULL);
	i = word_count(s, c);
	array = (char **)malloc(sizeof(char *) * (i + 1));
	if (!array)
		return (NULL);
	array[i] = NULL;
	result = copyarray(array, c, s);
	if (result == -1)
	{
		free(array);
		return (NULL);
	}
	return (array);
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