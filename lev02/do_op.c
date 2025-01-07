/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 12:45:58 by milenka           #+#    #+#             */
/*   Updated: 2022/05/23 12:46:01 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    int first;
    int second;
    char oper;
    int res;

    if (argc == 4)
    {
        first = atoi(argv[1]);
        second = atoi(argv[3]);
        oper = argv[2][0];
        if (oper == '+')
            res = first + second;
        else if (oper == '-')
            res = first - second;
        else if (oper == '*')
            res = first * second;
        else if (oper == '/')
            res = first / second;
        else if (oper == '%')
            res = first % second;
        printf ("%d\n", res);   
    }
    else 
        write (1, "\n", 1);
    return (0);
}
