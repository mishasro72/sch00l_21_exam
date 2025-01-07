/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expandr_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:21:10 by milenka           #+#    #+#             */
/*   Updated: 2022/05/24 20:21:12 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		word_len(char *str, int i)
{
	int len;
    
    len = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		i++;
		len++;
	}
	return (len);
}

void	expand_str(char *str)
{
	int len;
	int flag;
    int i;

    i = 0;
    flag = 1;
    while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t')
		    i++;
        len = word_len(str, i);
		if (len > 0 && flag == 0)
			write(1, "   ", 3);
		flag = 0;
		write(1, &str[i], len);
		i = i + len;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		expand_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
