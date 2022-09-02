/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:31:53 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/02 18:04:12 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int ft_strlen(char *str)
{
	int length;
	int	i;

	length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return length;
}

int	main()
{
	int len;

	ft_strlen("mustik");

	len = ft_strlen("mustik");

	printf("%d", len);


}
