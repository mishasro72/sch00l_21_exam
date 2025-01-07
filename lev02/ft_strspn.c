/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milenka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:44:13 by milenka           #+#    #+#             */
/*   Updated: 2022/05/23 20:44:15 by milenka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t i2;

    i = 0;
    i2 = 0;
    while (s[i] != '\0')
    {
        while (accept[i2] != '\0')
        {
            if (s[i] == accept[i2])
            {
                i++;
                i2 = 0;
            }
            else
                i2++;
        }
        break;
    }
    return (i);
}

/* #include <stdio.h>
 int    main(void)
 {
     char haystack[] = "0123456789";
     char accept[] = "210354";

     printf("%d\n", ft_strspn(haystack, accept));
 }
*/
