#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, k = 1;

    scanf("%d %d %d", &a, &b, &c);

    if (b >= c)
    {
        printf("-1");
        return 0;
    }
    k = a / (c - b) + 1;

    printf("%d", k);
    return 0;
}