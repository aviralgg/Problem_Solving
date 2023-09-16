#include <stdio.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 0; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    int k = 2;
    for (int i = k; i >= 1; i--)
    {
        for (int j = 0; j <= k - i + 1; j++)
        {
            printf("  ");
        }
        for (int j = 2 * i - 1; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}