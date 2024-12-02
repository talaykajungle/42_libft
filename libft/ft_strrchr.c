/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:02:04 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/02 19:13:53 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *last_occurence = NULL;
	
	if(s == NULL)
		return NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occurence = ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_occurence);
}

// int main(void)
// {
// 	const char *str = "Hello, world!";
//     char ch = 'o';
//     char *result = ft_strrchr(str, ch);

//     if (result) {
//         printf("Last occurrence of '%c': %s\n", ch, result);
//     } else {
//         printf("Character '%c' not found in the string.\n", ch);
//     }
//     // Test for the null character
//     char *null_result = ft_strrchr(str, '\0');
//     if (null_result) {
//         printf("Null terminator found at position: %ld\n", null_result - str);
//     }
//     return 0;
// }