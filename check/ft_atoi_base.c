char to_lower(char c)
{
    if (c >='A' && c <= 'Z')
        c = c + 32;
    return (c);
}

int get_digit(char c, int str_base)
{
    int max;

    if (str_base <= 10)
        max = str_base + '0';
    else 
        max = str_base - 10 + 'a';
    if (c >= '0' && c <= '9' && c <= max)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max)
        return (c + 10 - 'a');
    else
        return (-1);    
}

int ft_atoi_base(const char * str, int str_base)
{
    int result;
    int znak;
    int digit;
    int i;

    result = 0;
    znak = 1;
    i = 0;
    if (str[i] == '-')
    {
        znak = -1;
        i++;
    }
    while ((digit = get_digit(to_lower(str[i]), str_base)) >= 0)
    {
        result = result * str_base;
        result = result + (digit * znak);
        i++;
    }
    return (result);
}

#include <stdio.h>
 
int      main(void)
{
 printf("%d\n", ft_atoi_base("15690b80B", 13));
}
