#include <stdio.h>
int front=-1;
int heep[500000];

void hip(int n);
int main(void)
{
   int n,tmp;
   scanf("%d" , &n);
   for(int i=0; i<n; i++)
   {
       scanf("%d", &tmp);
       hip(tmp);
   }
    return 0;
}
void hip(int n)
{
    int location;
    if(n==0)
    {
        if(front==-1)
            printf("0\n");
        else
            printf("%d\n",heep[front--]);
    }
    else if(front==-1)
    {
        heep[++front]=n;
    }
    else
    {
        if(heep[front]<n)
        {
            heep[++front]=n;
        }
        else
        {
            location=front;
            front++;
            while(location>-1 && heep[location]>n)
            {
                location--;
            }
            for(int i=front; i>=location+1; i--)
            {
                heep[i+1]=heep[i];
            }
            heep[location+1]=n;
        }
    }

}
