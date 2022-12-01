#include <stdio.h>

int main(void)
{
    int n,m;
    int card[1000];
    int sum=0;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &card[i]);
    }
    for(int i=n-1; i>0; i--)
    {
        for(int j=i-1; j>0; j--)
        {
            for(int k=j-1; k>0; k--)
            {
                if((card[k]+card[j]+card[i])<=m)
                {
                    if(sum<card[k]+card[j]+card[i])
                    sum = card[k]+card[j]+card[i];
                }
            }
        }
    }
    printf("%d\n",sum);
    
    return 0;
}
