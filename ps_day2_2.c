# include<stdio.h>

    int main(){
     int n = 4;
    int x;
    for (int i = 1; i <= n; i++)
    {
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        x = i;
        for (int j = 1; j <= i; j++)
        {

            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
return 0;
}