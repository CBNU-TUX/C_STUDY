#include <stdio.h>

int factorial(int n);

int main(void)
{
    int N,K;
    int Fomula=0;
    scanf("%d %d", &N, &K);
    Fomula = factorial(N)/(factorial(K)*(factorial(N-K)));
    printf("%d\n", Fomula);

    return 0;
}

int factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}
