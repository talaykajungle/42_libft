/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:16 by tamutlu           #+#    #+#             */
/*   Updated: 2024/12/08 11:39:03 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int main() {
//     char buffer[10]; // Create a buffer of 10 bytes

//     // Manually fill the buffer with non-zero values for testing
//     buffer[0] = 'A';
//     buffer[1] = 'B';
//     buffer[2] = 'C';
//     buffer[3] = 'D';
//     buffer[4] = 'E';
//     buffer[5] = 'F';
//     buffer[6] = 'G';
//     buffer[7] = 'H';
//     buffer[8] = 'I';
//     buffer[9] = 'J';

//     // Print the buffer contents before ft_bzero

//     printf("Buffer contents before ft_bzero: ");
//     printf("%c %c %c %c %c %c %c %c %c %c\n",

//            buffer[0], buffer[1], buffer[2], buffer[3],
//            buffer[4], buffer[5], buffer[6], buffer[7],
//            buffer[8], buffer[9]);

//     // Use ft_bzero to set the buffer to zero

//     ft_bzero(buffer, sizeof(buffer));

//     // Print the buffer contents after ft_bzero
//     printf("Buffer contents after ft_bzero: ");
//     printf("%d %d %d %d %d %d %d %d %d %d\n",

//            buffer[0], buffer[1], buffer[2], buffer[3],
//            buffer[4], buffer[5], buffer[6], buffer[7],
//            buffer[8], buffer[9]);
//     return (0);
// }