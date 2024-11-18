/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:38 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/17 19:42:40 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *s_cmp1, *s_cmp2;

	s_cmp1 = s1;
	s_cmp2 = s2;
	
	while (n)
	{
		if(*s_cmp1 != *s_cmp2)
		{
			return(*s_cmp1 - *s_cmp2);
		}
		s_cmp1++;
		s_cmp2++;
		n--;
	}
	return(0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char myStr1[] = "abcde";
// 	char myStr2[] = "abcdhijkl";
	
// 	int cmp = memcmp(myStr1, myStr2, 7);
	
// 	printf("%d ,%s, %s",cmp , myStr1, myStr2);
// }
