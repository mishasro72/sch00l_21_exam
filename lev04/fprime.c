/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:39:58 by milenka           #+#    #+#             */
/*   Updated: 2022/05/27 13:40:06 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_prime(int n)
{
    int i;

    i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (1);
}

void fprime(char *str)
{
    int n;
    int factor;
    int flag;

    n = atoi(str);
    flag = 1;
    if (n == 1)
        printf("1");
    factor = 2;
    while (factor <= n)
    {
        if (n % factor == 0 && is_prime(factor))
        {
            if (flag == 1)
            {
                printf("%d", factor);
                flag = 0;
            }
            else 
                printf("*%d", factor);
            n = n / factor;
        }
        else 
            factor++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
        fprime (argv[1]);
    printf("\n");
    return (0);
}
