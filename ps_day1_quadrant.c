#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the XY coordinates\n");
    scanf("%d%d", &x, &y);
    if (x > 0 && y > 0)
        printf("First quadrant");
    else if (x < 0 && y > 0)
        printf("Second quadrant");
    else if (x < 0 && y < 0)
        printf("Third quadrant");
    else if (x == 0 && y == 0)
        printf("origin");
    else
        printf("Fourth quadrant");

    return 0;
}