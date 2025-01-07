/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 20:41:58 by milenka           #+#    #+#             */
/*   Updated: 2022/05/27 20:42:02 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rostring(char *str)
{
    int i;
    int k;

    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    k = i;
    while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' 
        && (str[i - 1] == ' ' || str[i -1] == '\t'))
        {
            while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
            {
                write (1, &str[i], 1);
                i++;
            }
            write (1, " ", 1);
        }
        i++;
    }
    while (str[k] != ' ' && str[k] != '\t' && str[k] != '\0')
    {
        write (1, &str[k], 1);
        k++;
    }

}

int		main(int argc, char *argv[])
{
	if (argc > 1)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
