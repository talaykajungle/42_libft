/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamutlu <tamutlu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:01:38 by tamutlu           #+#    #+#             */
/*   Updated: 2024/11/18 16:20:52 by tamutlu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s_cmp1;
	const unsigned char	*s_cmp2;

	s_cmp1 = s1;
	s_cmp2 = s2;
	while (n)
	{
		if (*s_cmp1 != *s_cmp2)
		{
			return (*s_cmp1 - *s_cmp2);
		}
		s_cmp1++;
		s_cmp2++;
		n--;
	}
	return (0);
}
