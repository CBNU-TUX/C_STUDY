#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
    long long number;
    struct _node* next;
}node;

typedef struct _bucket{
    struct _bucket* head;
    long long count;
}bucket;

bucket* Hashtable = NULL;

node* createNode(long long n);
long long Hashfunction(long long n);
void insert(long long n);
void search(long long n);

int main(void)
{
    long long number,number2,temp,check[500000];
    scanf("%lld", &number);
    Hashtable = (bucket*)malloc(sizeof(bucket)*500000);
    for(long long i=0; i<number; i++)
    {
        scanf("%lld",&temp);
        insert(temp);
    }   
    scanf("%lld", &number2);
    for(long long i=0; i<number2; i++)
    {
        scanf("%lld", &check[i]);
        search(check[i]);
    }
    printf("\n");

    return 0;
}
node* createNode(long long n)
{
    node* newnode;
    newnode = (node*)malloc(sizeof(node));
    newnode->number = n;
    newnode->next = NULL;

    return newnode;
}
long long Hashfunction(long long n)
{
    if(n<0) n*=(-1);
    return n%500000;
}
void insert(long long n)
{
    long long Hashindex = Hashfunction(n);
    node* Newnode = createNode(n);
    if(Hashtable[Hashindex].count == 0)
    {
        Hashtable[Hashindex].head = Newnode;
        Hashtable[Hashindex].count = 1;
    }
    else
    {
        Newnode->next = Hashtable[Hashindex].head;
        Hashtable[Hashindex].head = Newnode;
        Hashtable[Hashindex].count++;
    }
}
void search(long long n)
{
    long long Hashindex = Hashfunction(n);
    long long count=0;
    node* seek;
    seek = Hashtable[Hashindex].head;
    if(seek==NULL)
    {
        printf("%lld ", count);
        return;
    }
    while(seek!=NULL)
    {
        if(seek->number == n)
        {
            count++;
        }
        seek = seek->next;
    }
    printf("%lld ", count);
}
