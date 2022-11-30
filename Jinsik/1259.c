#include <stdio.h>
#include <string.h>

int main(void)
{
    char n[100000];
    int l,count;
    while(1)
    {
        scanf("%s", n);
        if(strcmp(n,"0")==0) break;
        l=strlen(n);
        count=0;
        for(int i=0; i<(l/2); i++)
        {
            if(n[i] == n[l-1-i]) count++;
        }
        if(count==(l/2)) printf("yes\n");
        else printf("no\n");
    }
    
    return 0;
}
