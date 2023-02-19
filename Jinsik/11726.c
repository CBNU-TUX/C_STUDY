#include <stdio.h>
int dp[3000];

int main(void)
{
    int n;
    scanf("%d", &n);
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(int i=4; i<=n; i++)
    {
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }
    printf("%d\n", dp[n]);

    return 0;
}
