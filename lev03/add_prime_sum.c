/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:01:07 by milenka           #+#    #+#             */
/*   Updated: 2022/05/24 18:01:10 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;

    if (nb >= 10)
        ft_putnbr(nb/10);
    c = (nb % 10) + '0';
    write (1, &c, 1);
}

int ft_atoi(char *str)
{
    int res;
    int i;

    i = 0;
    res = 0;
    while (str[i] != '\0' && (str[i] <= '9' && str[i] >= '0'))
    {
        res = res * 10;
        res = res + (str[i] - '0');
        i++;
    }
    return (res);
}

int is_prime(int nb)
{
    int i;

    i = 2;
    while (i < nb)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int sum_prime(int nb)
{
    int sum;

    sum = 0;
    while (nb >= 2)
    {
        if (is_prime(nb) /*== 1*/)
            sum += nb;
        nb--;
    }
    return (sum);
}

int main (int argc, char **argv)
{
    int nb;

    if (argc == 2)
    {
        nb = ft_atoi(argv[1]);
        ft_putnbr(sum_prime(nb));        
    } 
    else 
        write (1, "0", 1);
    write (1, "\n", 1);
    return (0);    
}
