#include <stdio.h>

int main(void)
{
    int N,staris[400],dp[400],a,b,c;
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &staris[i]);
    }
    dp[0]=staris[0];
    dp[1]=staris[0]+staris[1];
    dp[2]=(staris[0]+staris[2])>(staris[1]+staris[2])?(staris[0]+staris[2]):(staris[1]+staris[2]);
    for(int i=3; i<N; i++)
    {
        a=dp[i-2]+staris[i];
        b=dp[i-3]+staris[i-1]+staris[i];
        dp[i]=(a>b)?a:b;
    }
    printf("%d\n", dp[N-1]);

    return 0;
}
