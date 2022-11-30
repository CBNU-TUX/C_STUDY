#include <stdio.h>

int main(void)
{
    int n[5],check=0;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &n[i]);
        check += (n[i]*n[i]);
    }
    check%=10;
    printf("%d\n", check);
    return 0;
}
