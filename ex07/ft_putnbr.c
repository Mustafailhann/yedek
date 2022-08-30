/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:50:57 by muilhan           #+#    #+#             */
/*   Updated: 2022/08/30 21:12:15 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int mi)
{
	if (mi == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		mi = 147483648;
	}
	if (mi < 0)
	{
		ft_putchar('-');
		mi *= -1;
		ft_putnbr(mi);
	}
	else if (mi >= 10)
	{
		ft_putnbr(mi / 10);
		ft_putnbr(mi % 10);
	}
	else
	{
		ft_putchar(mi + 48);
	}
}
/*int main (void)
{
	ft_putnbr(734);
}*/
