/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmcho <sungmcho@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 16:11:15 by sungmcho          #+#    #+#             */
/*   Updated: 2021/06/02 17:33:32 by sungmcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	start;
	size_t	idx;
	char	*h_temp;
	char	*n_temp;

	start = 0;
	idx = 0;
	h_temp = (char *)haystack;
	n_temp = (char *)needle;
	if (n_temp[0] == '\0')
		return (h_temp);
	while (start < len || h_temp[start])
	{
		if (h_temp[start] == n_temp[0])
		{
			while (n_temp[idx])
			{
				if(h_temp[start + idx] != n_temp[idx])
					return (NULL);
				idx++;
			}
		}
		start++;
	}
	return(h_temp + start);
}
