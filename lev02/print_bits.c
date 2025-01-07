/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:24:20 by milenka           #+#    #+#             */
/*   Updated: 2022/05/24 15:24:22 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;
    char c;

    i = 128;
    while (i > 0)
    {
        if (octet < i)
        {
            c = '0';
            i = i / 2;
            write (1, &c, 1);
        }
        else
        {
            c = '1';
            write (1, &c, 1);
            octet = octet - i;
            i = i / 2;
        }
    }
}

int main (int argc, char **argv)
{
    print_bits(4);
    return (0);
}
