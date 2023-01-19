#include <stdio.h>

int main(void)
{
    int N,arr[500]={0},sum=0;
    scanf("%d", &N);
    sum = (N/5)+(N/25)+(N/125);
    printf("%d", sum);

    return 0;
}
