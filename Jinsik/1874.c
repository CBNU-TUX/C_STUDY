#include <stdio.h>
#define MAX 500000
int stack[MAX]={0};
int A[MAX];
int sign[MAX];
int s=-1;
int top=-1;

void push(int key);
void pop(void);

int main(void)
{
    int n,k=1,stop=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    while(stack[top]!=A[0])
    {
        sign[++s]=1;
        push(k);
        k++;
    }
    if(stack[top]==A[0])
    {
        sign[++s]=0;
        pop();
    }
    for(int i=1; i<n; i++)
    {
        if(stack[top]<A[i])
        {
            while(stack[top]!=A[i])
            {
                sign[++s]=1;
                push(k);
                k++;
            }
        }
        if(stack[top]==A[i])
        {
            sign[++s]=0;
            pop();
        }
        else
        {
            stop=1;
            break;
        }
    }
    if(stop==1)
        printf("NO\n");
    else
    {
        for(int i=0; i<=s; i++)
        {
            if(sign[i]==1)
                printf("+\n");
            else
                printf("-\n");
        }
    }

    return 0;
}
void push(int key)
{
    stack[++top]=key;
}
void pop(void)
{
    top--;
}
