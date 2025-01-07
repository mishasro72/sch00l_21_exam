/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scanola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:03:10 by scanola           #+#    #+#             */
/*   Updated: 2022/05/26 20:03:13 by scanola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i] >= '0' && str[i] <= '9')
    {
        res *= 10;
        res += (str[i]) - '0';
        i++;
    }
    return (res);
}

void ft_putnbr(int nb)
{
    char c;

    if (nb >= 10)
        ft_putnbr(nb / 10);
    c = (nb % 10) + '0';
    write(1, &c, 1);  
}

int main (int argc, char **argv)
{
    int i;
    int n;

    i = 1;
    if (argc == 2)
    {
        n = ft_atoi(argv[1]);
        while (i <= 9)
        {
            ft_putnbr (i);
            write (1, " x ", 3);
            ft_putnbr(n);
            write (1, " = ", 3);
            ft_putnbr (i * n);
            write (1, "\n", 1);
            i++;
        }
    }
    else 
        write (1, "\n", 1);
    return (0);
}

