/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:33:19 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/03 13:16:16 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int	tab[] = {1, 5, 3, 8, 2, 9};
	ft_rev_int_tab(tab, 6);
	int i;

	i = 0;
	while (i < 6)
	{
		printf(" %d", tab[i]);
		i++;
	}
}*/
