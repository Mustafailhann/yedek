/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <muilhan@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 13:29:57 by muilhan           #+#    #+#             */
/*   Updated: 2022/08/28 13:30:09 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char a)
{
    write(1, &a, 1);
}
void    ft_print_alphabet(void)
{
    int c;
    
    c = 122;
    while(c >= 97 )
    {
        ft_putchar(c);
        c--;
    }
}/*
int main()
{
    ft_print_alphabet();
    return (0);
}*/
