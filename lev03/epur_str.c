/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 19:56:35 by milenka           #+#    #+#             */
/*   Updated: 2022/05/24 19:56:37 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		skip_space(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t')
		++i;
	return (i);
}

int		ft_wordlen(char *str, int i)
{
	//int i = 0;
	int len = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		len++;
		i++;
	}
	return (len);
}

void	epur_str(char *str)
{
	int i;
	int len;
	int flag;

    i = 0;
	flag = 1;
	i = skip_space(str, i);
	while (str[i] != '\0')
	{
		if (flag == 0)
			write (1, " ", 1);
		len = ft_wordlen(str, i);
		write(1, &str[i], len);
		flag = 0;
		i = i + len;
		i = skip_space(str, i);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return (0);
}
