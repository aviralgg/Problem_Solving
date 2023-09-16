#include <stdio.h>

int main()
{
    int n = 69;

    for (int i = n; i >= 65; i--)
    {
        int k = i;
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%c", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}