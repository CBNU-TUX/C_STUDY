#include <stdio.h>

int main(void)
{
    int n,T,dp[500];
    scanf("%d", &T);
    dp[0]=1;
    dp[1]=2;
    dp[2]=4;
    for(int i=3; i<11; i++)
    {
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    for(int i=0; i<T; i++)
    {
        scanf("%d", &n);
        printf("%d\n", dp[n-1]);
    }
    

    return 0;
}
