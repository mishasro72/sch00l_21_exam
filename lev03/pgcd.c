#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv)
{
    int n;
    int a;
    int b;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        if (a > b)
            n = a;
        else 
            n = b;
        while (n > 0)
        {
            if (a % n == 0 && b % n == 0)
            {
                printf("%d\n", n);
                return (0);
            }
            n--;
        }
    }
    printf("\n");
    return (0);
}
