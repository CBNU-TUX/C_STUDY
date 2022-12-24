#include <stdio.h>
#include <string.h>

int length(int key)
{
    int count = 0;
    for(int i=key; i!=0; i/=10)
    {
        count++;
    }
    return count;
}
int main(void)
{
    int n, doom=666,count,l,square,fine=0;
    scanf("%d", &n);
    while(n!=fine)
    {
        int tmp;
        l=length(doom);
        count=0;
        square=1;
        for(int i=0; i<l; i++)
        {
            tmp = (doom/square)%10;
            if(tmp==6)
                count++;
            else
                count=0;
            if(count==3)
            {
                fine++;
                break;
            }
            square*=10;
        }
        doom++;
    }
    printf("%d\n", doom-1);

    return 0;
}
