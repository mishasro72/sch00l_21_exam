#include <unistd.h>

void str_capitalizer(char *str)
{
    int i;

    i =  0;

    while (str[i] != '\0')
    {
        while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t'))
        {
            write (1, &str[i], 1);
            i++;
        }  
        if (str[i] != '\0')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] = str[i] - 32;
            write (1, &str[i], 1);
            i++;
        }
        while (str[i] != '\0' && (str[i] != ' ' || str[i] != '\t'))
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                str[i] = str[i] + 32;
            write (1, &str[i], 1);
            i++;
        }
    } 
    write (1, "\n", 1);
}

int main (int argc, char **argv)
{
    int i;

    if (argc == 1)
        write (1, "\n", 1);
    i = 1;
    while (i < argc)
    {
        str_capitalizer(argv[i]);
        i++;
    }
    return (0);
}

