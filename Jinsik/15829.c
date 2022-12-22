#include <stdio.h>

int main(void)
{
    unsigned long long sum=0,n,square=1;
    int m=1234567891;
    char nemo[55];
    scanf("%llu\n", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%c", &nemo[i]);
        sum += (nemo[i]-'a'+1)*square;
        sum %= m;
        square = (square*31);
        square %= m;
    }   
    printf("%llu", sum);    

    return 0;
}
