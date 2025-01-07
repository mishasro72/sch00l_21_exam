/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:53:37 by milenka           #+#    #+#             */
/*   Updated: 2022/05/23 19:53:38 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    int  i;
    char tmp;
    int len;

    len = (ft_strlen(str) - 1);
    i = 0;
    while (len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        len--;
        i++;
    }
    return (str);
}
