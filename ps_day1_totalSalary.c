#include <stdio.h>

int main()
{
    float bs, allow;
    char grade;
    scanf("%f %c", &bs, &grade);
    int hra = (20 / 100) * bs;
    int da = (50 / 100) * bs;
    if (grade == 'A')
        allow = 1700;
    else if (grade == 'B')
        allow = 1500;
    else
        allow = 1300;
    int pf = (11 / 100) * bs;
    int totalSalary = bs + hra + da + allow - pf;
    printf("Total salary is %d", totalSalary);
    return 0;
}