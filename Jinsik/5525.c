#include <stdio.h>
#define SIZE 3000005

int main(void)
{
    int N,M,count=0;
    char S[SIZE];
    scanf("%d", &N);
    scanf("%d %s", &M, S);
    for(int i=0; i<M;)
    {
        if(S[i]=='I')
        {
            int min=i;
            int temp=i+1;
            int q=1;
            while(i<M)
            {
                if(i%2==0) // even
                {
                    if(temp%2==0 && S[temp]=='I')
                    {
                        q++;
                        temp++;
                    }
                    else if(temp%2==1 && S[temp]=='O')
                    {
                        q++;
                        temp++;
                    }
                    else
                    {
                        i+=(temp-min);  
                        break;
                    }
                }
                else if(i%2==1) // odd
                {
                    if(temp%2==1 && S[temp]=='I')
                    {
                        q++;
                        temp++;
                    }  
                    else if(temp%2==0 && S[temp]=='O')
                    {
                        q++;
                        temp++;
                    }
                    else
                    {
                        i+=(temp-min);  
                        break;
                    }
                }
            }
            
            int z=q-(2*N);
            if(z>0)
            {
                if(z%2==0)
                    count+=(z/2);
                else
                    count+=(z/2+1);
            }
        }
        else
            i++;
    }
    printf("%d\n", count);

    return 0;
}
