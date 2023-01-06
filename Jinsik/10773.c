#include <stdio.h>
#define MAX 100000
int stack[MAX];
int top=-1;

void push(int key);
void pop(void);

int main(void)
{
    int n,tmp,sum;
    sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &tmp);
        if(tmp==0)
            pop();
        else
            push(tmp);
    }
    if(top==-1)
        sum=0;
    else
    {
        for(int i=0; i<=top; i++)
        {
            sum+=stack[i];
        }
    }
    printf("%d\n", sum);

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
