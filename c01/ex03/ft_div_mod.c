/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:09:16 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/01 22:13:52 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if ( b!= 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int *div;

int	main(void)
{
	int	a;
	int b,c,d;

	a = 14;
	b = 8;

	ft_div_mod(a, b, &c, &d);
	printf("bölumun sonucu : %d \n", c);
	printf("modun sonucu : %d \n", d);
}
