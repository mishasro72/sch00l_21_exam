/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 14:20:47 by milenka           #+#    #+#             */
/*   Updated: 2022/05/27 14:20:49 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int absolut_int(int nb)
{
    if (nb < 0)
        return (-nb);
    return (nb);
}

int int_len(int nb)
{
    int len;

    len = 0;
    if (nb <= 0)
        len++;
    while (nb != 0)
    {
        nb = nb / 10;
        len++;
    }
    return (len);
}

char *ft_itoa (int nb)
{
    int len;
    char *result;

    len = int_len(nb);
    result = malloc (sizeof(char) * (len + 1));
    result[len] = '\0';
    if (nb < 0)
    {
        result[0] = '-';
    }
    else if (nb == 0)
        result[0] = '0';
    while (nb != 0)
    {
        len--;
        result[len] = absolut_int(nb % 10) + '0';
        nb = nb / 10;
    }
    return (result);
}

#include <stdio.h>
#include <limits.h>

int		main(void)
{
 	int d = INT_MIN;
 	printf("%d =? %s\n", d, ft_itoa(d));

 	d = -13;
 	printf("%d =? %s\n", d, ft_itoa(d));

 	d = 0;
 	printf("%d =? %s\n", d, ft_itoa(d));

 	d = 5;
	printf("%d =? %s\n", d, ft_itoa(d));

 	d = INT_MAX;
 	printf("%d =? %s\n", d, ft_itoa(d));
}
