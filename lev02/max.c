/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:46:47 by milenka           #+#    #+#             */
/*   Updated: 2022/05/24 14:46:50 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int max(int *tab, unsigned int len)
{
    int i;
    int max;

    if (len == 0)
        return (0);
    i = 1;    
    max = tab[0];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    return (max);
}
