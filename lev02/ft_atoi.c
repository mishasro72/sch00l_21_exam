/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:46:29 by milenka           #+#    #+#             */
/*   Updated: 2022/05/23 13:46:31 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int i;
    int res;
    int neg;

    i = 0;
    res = 0;
    neg = 1;
    while (str[i] == '\n' || str[i] == '\f' || str[i] == '\r' 
        || str[i] == '\t' || str[i] == '\v')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        res = res * 10;
        res = res + (str[i] - '0');
        i++;
    }
    return (res * neg);
}

#include <stdio.h>

int main (void)
{
    char *str = "123456";

    printf("%d\n", ft_atoi(str));
}
