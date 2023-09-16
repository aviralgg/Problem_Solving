#include <stdio.h>

int main()
{
    int k = 3;
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
    int n = 3;
    for (int i = 2; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 0; j--)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}