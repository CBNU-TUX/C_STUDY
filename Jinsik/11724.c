#include <stdio.h>
#define SIZE 1001

int graph[SIZE][SIZE];
int visited[SIZE];
int count=0;

void DFS(int cur, int n)
{
    visited[cur]=1;
    for(int i=1; i<=n; i++){
        if(graph[cur][i]==1 && visited[i]==0){
            DFS(i,n);
        }
    }

}

int main(void)
{
    int M,N,x,y;
    scanf("%d %d", &M, &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &x, &y);
        graph[x][y]=1;
        graph[y][x]=1;
    }
    for(int i=1; i<=M; i++){
        if(visited[i]==0){
            DFS(i,M);
            count++;
        }
    }
    printf("%d\n", count);
    
    return 0;
}
