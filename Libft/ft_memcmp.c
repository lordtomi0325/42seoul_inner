/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmcho <sungmcho@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:37:33 by sungmcho          #+#    #+#             */
/*   Updated: 2021/06/02 15:49:57 by sungmcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			idx;
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;

	idx = 0;
	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	if (!*s1_temp && !*s2_temp)
		return (0);
	while (idx < n)
	{
		if (s1_temp[idx] != s2_temp[idx])
			return (s1_temp[idx] - s2_temp[idx]);
			break;
		idx++;
	}
	return (0);
}
