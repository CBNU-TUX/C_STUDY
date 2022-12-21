#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX 10000
int stack[MAX];
int top = -1;

int Isempty();
void size();
void push(int key);
int pop(void);
void print_top();

int main(void)
{
    int s,key;
    char order[10001][6];
    scanf("%d", &s);
    for(int i=0; i<s; i++)
    {
        scanf("%s", order[i]);
        if(strcmp(order[i],"push")==0)
        {
            scanf("%d\n", &key);
            push(key);
        }
        if(strcmp(order[i],"pop")==0)
            printf("%d\n",pop());
        if(strcmp(order[i],"size")==0)
            size();
        if(strcmp(order[i],"empty")==0)
            printf("%d\n",Isempty());
        if(strcmp(order[i],"top")==0)
            print_top();
    }

    return 0;
}

void print_top()
{
    if(Isempty()==true)
        printf("-1\n");
    else
        printf("%d\n", stack[top]);
}
void size()
{
    printf("%d\n", top+1);
}
int Isempty()
{
    if(top<0)
        return true;
    else 
        return false;
}
void push(int key)
{
    stack[++top] = key;
}
int pop(void)
{
    if(Isempty()==true)
        return -1;
    else
        return stack[top--];
}
