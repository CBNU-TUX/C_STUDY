#include <stdio.h>

int main(void)
{
    int op,i,j;
    int primes[10001];
    for(i = 2; i<=10000; i++)
        primes[i] = i;

    i = 2;
    while ((i*i) <= 10000)
    {
        if (primes[i] != 0)
        {
            for(j=2; j<10000; j++)
            {
                if (primes[i]*j > 10000)
                    break;
                else
                    primes[primes[i]*j]=0;
            }
        }
        i++;
    }
    scanf("%d", &op);
    for(int i=0; i<op; i++)
    {
        int n;
        scanf("%d", &n);

        int sel, ser;
        int mi = 0, minex=0;
        if(n%2==0)
        {
            mi = n/2;
            minex = n/2;
        }
        else if(n%2==1)
        {
            mi=n/2;
            minex=n/2+1;
        }
        for(int i=mi; i>1; i--)
        {
            if(primes[i] !=0 && primes[minex] != 0)
            {
                if(primes[i]+primes[minex] == n)
                {
                    sel = primes[i];
                    ser = primes[minex];
                    printf("%d %d\n", sel, ser);
                    break;
                }
                else minex++;
            }
            else{
                minex++;
                continue;
            }
        }
    }
}
