#include <stdio.h>

int main()
{
    int k = 65;
    for (int i = 1; i <= 3; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%c", k);
        }
        k++;
        printf("\n");
    }
    return 0;
}