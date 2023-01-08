#include <stdio.h>
#define MAX 5000000
#define TRUE 1
#define FALSE 0
int queue[MAX];
int rear;
int front;
int stop;

void addqueue(int key);
void deletqueue(int* count, int* index);

int main(void)
{
    int num,M,N,q,index,count;
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        stop=FALSE;
        rear=-1;
        front=-1;
        scanf("%d %d", &N, &M);
        index=M;
        count=0;
        for(int j=0; j<N; j++)
        {
            scanf("%d", &q);
            addqueue(q);
        }
        while(stop!=TRUE)
        {
            deletqueue(&count,&index);
        }
        printf("%d\n", count);
    }
    return 0;
}
void addqueue(int key)
{  
    rear = (rear+1)%MAX;
    queue[rear] = key;
}
void deletqueue(int* count, int* index)
{
    front = (front+1)%MAX;
    int max = front;
    for(int i=front; i<=rear; i++)
    {
        if(queue[max]<queue[i])
            max = i;
    }
    if(max==front)
    {
        *count = *count +1;
        if(*index==front)
            stop=TRUE;
    }
    else
    {
        addqueue(queue[front]);
        if(*index==front)
            *index=rear;
    }
}
