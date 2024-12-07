/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 18:56:55 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/07 19:45:33 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	printi_minti(char array[], int i, int fd)
{
	char	c;

	while (i >= 0)
	{
		c = array[i] + '0';
		write(fd, &c, 1);
		i--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	array[18];

	i = 0;
	if (fd == -1)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	while (n > 9)
	{
		array[i++] = n % 10;
		n /= 10;
	}
	array[i] = n;
	printi_minti(array, i, fd);
}

// int main() {

//     // Test cases for ft_putnbr_fd
//     int fd = 1; // File descriptor for standard output
//     // Edge cases
//     ft_putnbr_fd(0, fd); // Should print "0"
//     write(fd, "\n", 1);  // New line for better readability
//     ft_putnbr_fd(42, fd); // Should print "42"
//     write(fd, "\n", 1);
//     ft_putnbr_fd(-42, fd); // Should print "-42"
//     write(fd, "\n", 1);
//     ft_putnbr_fd(2147483647, fd); // Should print "2147483647"
//     write(fd, "\n", 1);
//     ft_putnbr_fd(-2147483648, fd); // Should print "-2147483648"
//     write(fd, "\n", 1);
//     // Additional edge cases
//     ft_putnbr_fd(1, fd); // Should print "1"
//     write(fd, "\n", 1);
//     ft_putnbr_fd(-1, fd); // Should print "-1"
//     write(fd, "\n", 1);
//     ft_putnbr_fd(123456789, fd); // Should print "123456789"
//     write(fd, "\n", 1);
//     ft_putnbr_fd(-123456789, fd); // Should print "-123456789"
//     write(fd, "\n", 1);
//     return 0;

// }