#include <stdio.h>

int main()
{
    int n = 5;
    int x;
    for (int i = 0; i < n; i++)
    {
        x = i;
        for (int j = 0; j < i; j++)
        {

            printf("%d", x);
            x++;
        }
        printf("\n");
    }
    return 0;
}