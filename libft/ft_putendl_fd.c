/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:55:15 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/08 11:26:08 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd == -1)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

// int main() {

//     char *str = "Hello, World!"; // The string to print
//     // Print to standard output (file descriptor 1)
//     ft_putendl_fd(str, 1);

//     // Optionally, you can also print to standard error (file descriptor 2)
//     ft_putendl_fd("This is an error message.", 2);
//     return 0;

// }