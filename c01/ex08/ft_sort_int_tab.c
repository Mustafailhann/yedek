/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 13:17:48 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/03 13:37:10 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int min;
    while (size != 0)
    {

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			min  = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = min;
		}
        i++;
	}
        size--;
    }
}

int	main(void)
{
	int	array[] = {1, 9, 3, 7, 5, 4};
	ft_sort_int_tab(array, 6);
	int a;

	a = 0;
	while (a < 6)
	{
		printf(" %d", array[a]);
		a++;
	}
}
