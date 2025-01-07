/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:23:12 by milenka           #+#    #+#             */
/*   Updated: 2022/05/24 21:23:14 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);

	c = (n % 10) + '0';
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	//(void)argv;		// Silence 'unused parameter' error
     
	ft_putnbr(argc - 1);
	write(1, "\n", 1);

	return (0);
}
