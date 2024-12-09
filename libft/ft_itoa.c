/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 19:11:25 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/08 22:57:07 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1; // Account for negative sign or zero
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	len = get_num_len(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0'; // Null-terminate the string
	if (n == 0)
	{
		str[0] = '0';
		return (str); // Return early for zero
	}
	if (n < 0)
	{
		str[0] = '-';
		if (n == INT_MIN)
		{
			n = 147483648; // Handle INT_MIN
		}
		else
		{
			n = -n; // Make n positive
		}
	}
	i = len - 1;
	while (n > 0)
	{
		str[i] = (n % 10) + '0'; // Fill the string with digits
		n /= 10; // Remove the last digit
		i--;
	}
	if (str[0] == '-')
	{
		str[1] = '2'; // Handle INT_MIN specifically
	}
	return (str); // Return the resulting string
}

// int	main(void)

// {
// 	int numbers[] = {0, 42, -42, 123456, -123456, INT_MIN, INT_MAX};
// 	int size = sizeof(numbers) / sizeof(numbers[0]);
// 	for (int i = 0; i < size; i++)
// 	{
// 		char *result = ft_itoa(numbers[i]);
// 		if (result)
// 		{
// 			printf("ft_itoa(%d) = %s\n", numbers[i], result);
// 			free(result); // Free the allocated memory
// 		}
// 		else
// 		{
// 			printf("Memory allocation failed for %d\n", numbers[i]);
// 		}
// 	}
// 	return (0);
// }