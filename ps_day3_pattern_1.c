#include <stdio.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
