/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:12:19 by milenka           #+#    #+#             */
/*   Updated: 2022/05/27 16:12:21 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_remove_if (t_list **begin_list, void *data_ref, int (*cmp))
{
    t_list *current;

    current = *begin_list;

    if (cmp(current->data, data_ref) == 0)
    {
        *begin_list = current->next;
        free (current);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    current = *begin_list;
    ft_list_remove_if(&current->next, data_ref, cmp);
}
