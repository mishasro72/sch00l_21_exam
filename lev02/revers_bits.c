/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revers_bits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scanola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:24:18 by scanola           #+#    #+#             */
/*   Updated: 2022/05/26 19:24:22 by scanola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char out;

    out = 0;

    out = out | ((octet & 128) >> 7);
    out = out | ((octet & 64) >> 5);
    out = out | ((octet & 32) >> 3);
    out = out | ((octet & 16) >> 1);
    out = out | ((octet & 8) << 1);
    out = out | ((octet & 4) << 3);
    out = out | ((octet & 2) << 5);
    out = out | ((octet & 1) << 7);
    return (out);
}
/*
int main (void)
{
    reverse_bits("01000001");
    return (0);
}*/

