#include <stdio.h>

int main(void)
{
    int N,M,num[100000],i,j,tmp;
    unsigned long long sum=0,result;
    scanf("%d %d", &N, &M);
    num[0]=0;
    for(int i=1; i<=N; i++)
    {
        scanf("%d", &tmp);
        sum+=tmp;
        num[i]=sum;
    }
    for(int k=0; k<M; k++)
    {
        scanf("%d %d", &i, &j);
        result=num[j]-num[i-1];
        printf("%llu\n",result);
    }
    
    return 0;
}
