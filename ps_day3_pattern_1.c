#include <stdio.h>

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= n - i; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//   for(int i=N;i>=1;i--){
//             for(int j=N;j>=i;j--){
//                 cout<<j;
//             }
//             for(int j=i;j>=1;j--){
//                 if(i==1 && j==i)cout<<N-i;
//                 else cout<<i;
//             }
//             cout<<N;
//             cout<<endl;
//         }
//         for(int i=N;i>1;i--){
//             for(int j=N;j>=(N-i+2);j--){
//                 cout<<j;
//             }
//             for(int j=(N-i+2);j<=N;j++){
//                 cout<<(N-i+2);
                
//             }
//             cout<<N;
//             cout<<endl;
//         }