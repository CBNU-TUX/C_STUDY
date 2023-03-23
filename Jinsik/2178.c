#include <stdio.h>
#define MAX 101

int graph[MAX][MAX]={0,};
int sum[MAX][MAX]={0,};
int queue_x[10001];
int queue_y[10001];
int N,M,count=0;

void BFS(int x, int y)
{
    int here=0,there=0;
    int rear=-1;
    int front=-1;

    queue_x[++rear]=x;
    queue_y[rear]=y;
    sum[y][x]=1;

    while(front<rear){
        here=queue_x[++front];
        there=queue_y[front];
        count++;
        // printf("graph[%d][%d]\n",there,here);
        if(graph[there][here+1]==1){
            graph[there][here+1]=0;
            queue_y[++rear]=there;
            queue_x[rear]=here+1;
            sum[there][here+1] = sum[there][here]+1;
        }
        if(graph[there][here-1]==1){
            graph[there][here-1]=0;
            queue_y[++rear]=there;
            queue_x[rear]=here-1;
            sum[there][here-1] = sum[there][here]+1;
        }
        if(graph[there+1][here]==1){
            graph[there+1][here]=0;
            queue_y[++rear]=there+1;
            queue_x[rear]=here;
            sum[there+1][here] = sum[there][here]+1;
        }
        if(graph[there-1][here]==1){
            graph[there-1][here]=0;
            queue_y[++rear]=there-1;
            queue_x[rear]=here;
            sum[there-1][here] = sum[there][here]+1;
        }
        if(there==N && here==M){
            sum[N][M]=sum[there][here];
        }
    }
}

int main(void)
{
    scanf("%d %d" ,&N, &M);
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            scanf("%1d", &graph[i][j]);
        }
    }
    BFS(1,1);
    printf("%d\n", sum[N][M]);
    
    return 0;
}
