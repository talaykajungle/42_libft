/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:10:58 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/09 15:08:19 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*new_str;

	i = 0;
	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len] != '\0')
		len++;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[len] = '\0';
	return (new_str);
}

char	to_upper_if_space(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c -= 32);
	else
		return (c);
}
// int main()
// {
// 	char s[] = "Hello World!";

// 	// Call ft_strmapi with the string and transformation function
// 	char *result = ft_strmapi(s, to_upper_if_space);

// 	if (result) {
// 		printf("Original string: %s\n", s);
// 		printf("Transformed string: %s\n", result);
// 		free(result); // Free the allocated memory
// 	} else {
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }