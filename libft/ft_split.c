/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 18:55:39 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/06 18:30:35 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char delimiter)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delimiter && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delimiter)
		{
			in_word = 0;
		}
		str++;
	}
	return (count);
}

static char	*get_next_word(const char **str, char delimiter)
{
	const char	*start = *str;
	size_t		length;
	char		*word;

	while (**str && **str != delimiter)
	{
		(*str)++;
	}
	length = *str - start;
	word = (char *)malloc(length + 1);
	if (word)
	{
		strncpy(word, start, length);
		word[length] = '\0';
	}
	return (word);
}

char	**ft_split(char const *s, char delimiter)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_wordcount(s, delimiter);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (!ft_fill_result(result, s, delimiter))
	{
		free(result);
		return (NULL);
	}
	return (result);
}

// void	free_split_result(char **result)
// {
// 	if (result)
// 	{
// 		for (int i = 0; result[i] != NULL; i++)
// 		{
// 			free(result[i]);
// 		}
// 		free(result);
// 	}
// }

// Function to free the allocated memory for the result
// Free each individual string
// Free the array of strings

// int	main(void)
// {
// 	char	**result;

// 	// Test 1: Normal case
// 	printf("Test 1: 'Hello World! OpenAI is great' (split on space)\n");
// 	result = ft_split("Hello World! OpenAI is great", ' ');
// 	print_split_result(result);
// 	free_split_result(result);
// 	// Test 2: String with multiple delimiters in a row
// 	printf("Test 2: 'Hello,,,,World' (split on comma)\n");
// 	result = ft_split("Hello,,,,World", ',');
// 	print_split_result(result);
// 	free_split_result(result);
// 	// Test 3: Empty string
// 	printf("Test 3: '' (split on space)\n");
// 	result = ft_split("", ' ');
// 	print_split_result(result);
// 	free_split_result(result);
// 	// Test 4: String with only delimiters
// 	printf("Test 4: ',,,,,' (split on comma)\n");
// 	result = ft_split(",,,,,", ',');
// 	print_split_result(result);
// 	free_split_result(result);
// 	// Test 5: NULL input
// 	printf("Test 5: NULL input\n");
// 	result = ft_split(NULL, ' ');
// 	print_split_result(result);
// 	free_split_result(result);
// 	// Test 6: No delimiters in string
// 	printf("Test 6: 'HelloWorld' (split on space)\n");
// 	result = ft_split("HelloWorld", ' ');
// 	print_split_result(result);
// 	free_split_result(result);
// 	return (0);
// }
