#include <stdio.h>

int main(void)
{
    int n[2002] = {0}, s, tempt;
    scanf("%d", &s);
    for(int i=0; i<s; i++)
    {
        scanf("%d", &n[i]);
    }
    for(int i=0; i<s; i++)
    {
        for(int j=i+1; j<s; j++)
        {
            if(n[i] > n[j])
            {
                tempt = n[i];
                n[i] = n[j];
                n[j] = tempt;
            }
        }
    }
    for(int i=0; i<s; i++)
    {
        printf("%d\n", n[i]);
    }

    return 0;
}
