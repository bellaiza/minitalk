/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <iporfiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:03:56 by iporfiri          #+#    #+#             */
/*   Updated: 2022/09/19 19:32:03 by iporfiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n > 0)
		{
	n--;
	(((unsigned char *)dest)[n] = ((unsigned char *)src)[n]);
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
