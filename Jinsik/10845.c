#include <stdio.h>
#include <string.h>

void push(int key);
int pop(void);
void size();
int empty();
void front();
void back();
int rear=-1;
int frontier=-1;
unsigned int queue[100000];

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
            printf("%d\n",empty());
        if(strcmp(order[i],"front")==0)
            front();
        if(strcmp(order[i],"back")==0)
            back();
    }

    return 0;
}
void push(int key)
{
    rear = (rear+1)%10000;
    queue[rear] = key;
}
int pop(void)
{
    if(rear==frontier)
        return -1;
    frontier = (frontier+1)%10000;
        return queue[frontier];
}
void size()
{
    int size;
    size = rear-frontier;
    printf("%d\n", size);
}
int empty()
{
    if(rear == frontier)
        return 1;
    else
        return 0;
}
void front()
{
    if(rear==frontier)
        printf("-1\n");
    else
        printf("%d\n", queue[frontier+1]);
}
void back()
{
    if(rear==frontier)
        printf("-1\n");
    else
        printf("%d\n", queue[rear]);
}
