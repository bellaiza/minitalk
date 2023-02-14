/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <iporfiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:59:58 by iporfiri          #+#    #+#             */
/*   Updated: 2022/09/19 19:31:08 by iporfiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r'
		|| c == '\f' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;

	while ((ft_isspace(*nptr)))
	nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
		sign = -1;
	nptr++;
	}
	num = 0;
	while ((ft_isdigit(*nptr)))
	{
			num *= 10;
			num += sign * (*nptr - '0');
			nptr++;
	}
	return (num);
}
