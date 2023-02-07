#include <stdio.h>
#include <string.h>

int main(void)
{
    int sum=0,len,next=0,mul=1, num[52]={0},p[52],k=0,tmp,total=0,end;
    char n[52];
    scanf("%s", n);
    len=strlen(n);
    for(int i=0; i<52; i++)
        p[i]=3;
    for(int i=0; i<len; i++)
    {
        mul=1;
        sum=0;
        if(n[i]=='+' || n[i]=='-')
        {
            for(int j=i-1; j>=next; j--)
            {
                sum+=(n[j]-'0')*mul;
                mul*=10;
            }
            num[k]=sum;
            if(n[i]=='+')
                p[k+1]=0;
            else
                p[k+1]=1;
            k++;
            next=i+1;
        }
        else if(i==len-1)
        {
            mul=1;
            sum=0;
            for(int j=i; j>=next; j--)
            {
                sum+=(n[j]-'0')*mul;
                mul*=10;
            }
            num[k]=sum;
        }
    }
    k=0;
    total+=num[0];
    for(int i=1; p[i]!=3;)
    {   
        if(p[i]==1)
        {
            tmp=0;
            for(;p[i]!=3;)
            {
                tmp+=num[i];
                i++;
                if(p[i]==1)
                {
                    break;
                }
                printf("i:%d\n",i);
                
            }
            printf("tmp:%d\n",tmp);
            total-=tmp;
        }
        else
        {
            total+=num[i];
            i++;
        }
        printf("total:%d\n",total);
    }
    printf("%d\n", total);

    return 0;
}
