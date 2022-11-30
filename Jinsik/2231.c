#include <stdio.h>

int main(void)
{
    long long N;
    long long num;
    long long result=0;
    long long value=0;
    scanf("%lld", &N);
    num=N;
    for(long long i=0; i<num; i++)
    {
        value = 0;
        long long l=10,a;
        a=N;
        int count=0;
        while(a!=0)
        {
            a /= 10;
            ++count;
        }
        --N;
        value = N;
        l=N;
        for(int i=0; i<count-1; i++)
        {
            value += l%10;
            l/=10;
        }
        value += l;
        if(value == num) result = N;
    }
    printf("%lld\n", result);

    return 0;   
}
