/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 15:24:44 by milenka           #+#    #+#             */
/*   Updated: 2022/05/27 15:24:45 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_foreach(t_list *begin_list, void (*f) (void *))
{

    while (begin_list != "\0")
    {
        if (begin_list->data)
            (*f) (begin_list->data);
        begin_list = begin_list->next;
    }
}

