#include <stdio.h>
#include <string.h>
#define MAX 10000

void push_front(int key);
void push_back(int key);
int pop_front();
int pop_back();
void size();
void empty();
void front_print();
void back();
int deque[MAX];
int rear = 0;
int front = 0;

int main(void)
{
    int s,key;
    char order[15];
    scanf("%d", &s);
    for(int i=0; i<s; i++)
    {
        scanf("%s", order);
        if(strcmp(order,"push_front")==0)
        {
            scanf("%d\n", &key);
            push_front(key);
        }
        else if(strcmp(order,"push_back")==0)
        {
            scanf("%d\n", &key);
            push_back(key);
        }
        else if(strcmp(order,"pop_front")==0)
            printf("%d\n",pop_front());
        else if(strcmp(order,"pop_back")==0)
            printf("%d\n",pop_back());
        else if(strcmp(order,"size")==0)
            size();
        else if(strcmp(order,"empty")==0)
            empty();
        else if(strcmp(order,"front")==0)
            front_print();
        else if(strcmp(order,"back")==0)
            back();
        printf("%d %d\n", rear, front);
    }
    return 0;
}
void push_front(int key)
{
    deque[front] = key;
    front = (front-1+MAX)%MAX;
}
int pop_front()
{
    if(rear == front)
        return -1;
    else
    {
        front = (front+1+MAX)%MAX;
        return deque[front];
    }
}
void front_print()
{
    if(rear==front)
        printf("-1\n");
    else
    {
        printf("%d\n", deque[(front+1)%MAX]);
    }
}
void push_back(int key)
{
    rear = (rear+1)%MAX;
    deque[rear] = key;
}
int pop_back()
{
    int prev = rear;
    if(rear == front)
        return -1;
    else
    {
        rear = (rear-1+MAX)%MAX;
        return deque[prev];
    }
}
void back()
{
    if(rear==front)
        printf("-1\n");
    else
        printf("%d\n", deque[rear]);
}
void size()
{
    int i=rear,count=0;
    while(i!=front)
    {
        i = (i-1+MAX)%MAX;
        count++;
    }
    printf("%d\n",count);
}
void empty()
{
    if(rear==front)
        printf("1\n");
    else
        printf("0\n");
}
