/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:12:35 by milenka           #+#    #+#             */
/*   Updated: 2022/05/27 21:12:37 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void sort_int_tab(int *tab, unsigned int size)
{
    int          tmp;
    int i;

    i = 0;
    while (i < (size - 1))
    {
        if (tab[i] > tab[i+1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = -1;    
        }
        i++;
    }
}


#include <stdio.h>

void	print_arr(int *tab, unsigned int size)
{
 	unsigned int i = 0;
 	while (i < size)
 	{
 		printf("%d, ", tab[i]);
 		++i;
 	}
 	printf("\n");
}
int		main(void)
{
int tab[] = { 25, 54, -3, -28, 1, 99 };
unsigned int size = sizeof(tab) / sizeof(*tab);

print_arr(tab, size);
sort_int_tab(tab, size);
print_arr(tab, size);
}
