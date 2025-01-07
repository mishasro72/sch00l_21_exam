/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:55:25 by milenka           #+#    #+#             */
/*   Updated: 2022/05/24 13:55:28 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_of_2(unsigned int n)
{
    int i;

    i = 1;
    while (i <= n)
    {
        if (i == n)
            return (1);
        i *= 2;
    }
    return (0);
}