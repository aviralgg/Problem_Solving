#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 0; j--)
        {
            printf(" ");
        }
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        for(int j=2;j<=i;j++){
            printf("%d",j);
        }

        printf("\n");
    }
    return 0;
}