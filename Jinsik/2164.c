#include <stdio.h>
#define MAX 500000
int queue[MAX];
void addq(int key); // add
int deleteq(void); // delete
int rear = -1; // 입력값의 위치
int front = -1; // 출력밧의 위치

int main(void)
{
    int card;
    scanf("%d", &card);
    for(int i=1; i<=card; i++)
    {
        addq(i);
    }
    for(int i=0;;i++)
    {
        if((rear-1)==front) // 값이 하나 남았다.
            break;
        if((i+1)%2==1)
        {
            deleteq(); // 버리기
        }
        else
        {
            addq(deleteq()); // 다시 밑에 집어넣기
        }
    }
    printf("%d\n", deleteq());
    return 0;
}
void addq(int key)
{
    rear = (rear+1)%MAX;
    queue[rear] = key;
}
int deleteq(void)
{
    front = (front+1)%MAX;
    return queue[front];
}
