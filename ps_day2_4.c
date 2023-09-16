#include <stdio.h>

int main()
{

    for (int i = 65; i <= 68; i++)
    {
        int k = i;
        for (int j = 65; j <= i; j++)
        {
            printf("%c", k);
            k++;
        }

        printf("\n");
    }
    return 0;
}