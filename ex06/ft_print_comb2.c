/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 16:01:06 by muilhan           #+#    #+#             */
/*   Updated: 2022/08/30 22:36:34 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1 ;
		while (b <= 99)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		b++;
		}
		a++;
	}
}
/*int	main()
{
	ft_print_comb2();
	return (0);
}*/
