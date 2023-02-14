/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <iporfiri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 20:45:41 by iporfiri          #+#    #+#             */
/*   Updated: 2022/09/13 20:49:02 by iporfiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_recursive(int n, int fd)
{
	if (n / 10 == 0)
	{
		ft_putchar_fd(n % 10 + '0', fd);
		return ;
	}
	ft_putnbr_recursive(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
	n += 2000000000;
		}
		n *= -1;
	}
	ft_putnbr_recursive(n, fd);
}
