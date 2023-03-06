#include <stdio.h>
#define SIZE 1001

int N,M,V;
int graph[SIZE][SIZE];
int visited[SIZE];
int discovered[SIZE];

typedef struct Queue
{
    int rear,front;
    int data[SIZE];
}Queue;

void init_discovered()
{
    for(int i=0; i<=N; i++){
        discovered[i]=0;
    }
}

void DFS(int cur, int n)
{
    visited[cur]=1;
    for(int i=1; i<=n; i++){
        if(graph[cur][i]==1 && visited[i]==0){
            printf("%d ",i);
            DFS(i,n);
        }
    }
}

void BFS(int start, int n)
{
    int here,there;
    Queue q;
    q.front=-1;
    q.rear=-1;
    discovered[start] = 1; // 발견 정점 최적화
    q.data[++q.rear] = start; // push

    while(q.front<q.rear)
    {
        here=q.data[++q.front];
        printf("%d ",here);
        for(int i=1; i<=n; i++){
            if(graph[here][i]){
                there=i;
                    if(!discovered[there]){
                    discovered[there]=1;
                    q.data[++q.rear]=there;
                }
            }
        }
    }
    printf("\n");
}

int main(void)
{
    int a,b;
    scanf("%d %d %d", &N,&M,&V);
    init_discovered();
    for(int i=0; i<M; i++)
    {
        scanf("%d %d", &a, &b);
        graph[a][b]=1;
        graph[b][a]=1;
    }
    printf("%d ",V );
    DFS(V,N);
    printf("\n");
    BFS(V,N);

    return 0;
}
