/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:09:08 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/01 20:45:46 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;
	int	*ptr;

	a = 16;
	ptr = &a;
	printf("ilk degeri %d dir\n", a);
	ft_ft(ptr);
	printf("son degeri  %d dir",*ptr);
}
