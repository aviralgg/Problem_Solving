#include <stdio.h>

int main()
{
    char n;
    printf("Enter the alphabet\n");
    scanf("%c", &n);
    if (n == 'A' || n == 'E' || n == 'I' || n == 'O' || n == 'U' || n == 'a' || n == 'e' || n == 'e' || n == 'o' || n == 'u')
        printf("Vowel");
    else
        printf("Consonant");
    return 0;
}