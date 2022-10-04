/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:28:37 by muilhan           #+#    #+#             */
/*   Updated: 2022/10/04 17:28:39 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void
	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;

	if (!b)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(unsigned char*)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}
