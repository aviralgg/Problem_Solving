#include <stdio.h>

int main()
{
    int n = 6;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int j = 1; j < 4 * (n - i) - 1; j++)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            if (j < n)
                printf("%d ", j);
        }

        printf("\n");
    }
    return 0;
}