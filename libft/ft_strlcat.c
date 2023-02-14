/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <iporfiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:05:15 by iporfiri          #+#    #+#             */
/*   Updated: 2022/09/15 20:21:35 by iporfiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	c;
	size_t	k;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	c = 0;
	k = i;
	if (size <= i)
	{
		return (j + size);
	}
	else
	{
		while (i < size - 1 && src[c] != '\0')
		{
			dst[i] = ((char *)src)[c];
			i++;
			c++;
		}
	dst[i] = '\0';
	}
	return (k + j);
}
