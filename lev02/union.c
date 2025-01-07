/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:27:01 by milenka           #+#    #+#             */
/*   Updated: 2022/05/24 16:27:04 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int buff[128] = { };
    int c;
    int i;

    i = 0;
    if (argc == 3)
    {   
        while (argv[1][i] != '\0')
        {
            c = argv[1][i];
            if (buff[c] == 0)
            {
                write (1,&argv[1][i], 1);
                buff[c] = 1;       
            }
            i++;
        }
        i = 0;
        while (argv[2][i] != '\0')
        {
            c = argv[2][i];
            if (buff[c] == 0)
            {
                write (1, &argv[2][i], 1);
                buff[c] = 1;
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}

/*
void	print_union(char *a, char *b)
{
	int characters[128] = { 0 };
	int c;

	while (*a != '\0')
	{
		c = *a;
		if (characters[c] == 0)
		{
			write(1, a, 1);
			characters[c] = 1;
		}
		++a;
	}

	while (*b != '\0')
	{
		c = *b;
		if (characters[c] == 0)
		{
			write(1, b, 1);
			characters[c] = 1;
		}
		++b;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}*/
