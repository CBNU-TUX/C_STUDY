#include <stdio.h>

int main(void)
{
    int n, k, tempt;
    int ns[1001];
    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ns[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(ns[i] < ns[j])
            {
                tempt = ns[i];
                ns[i] = ns[j];
                ns[j] = tempt;
            }
        }
    }
    printf("%d\n", ns[k-1]);
    return 0;
}
