#include <stdio.h>
#define SIZE 60

int graph[SIZE][SIZE];
int M,N; // width,height

void init_graph(int M,int N)
{
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            graph[i][j]=0;
        }
    }
}
    
void DFS(int x, int y)
{
    graph[x][y]=0;

    if(x+1<N && graph[x+1][y]==1) DFS(x+1,y);
    if(x-1>=0 && graph[x-1][y]==1) DFS(x-1,y);
    if(y+1<M && graph[x][y+1]==1) DFS(x,y+1);
    if(y-1>=0 && graph[x][y-1]==1) DFS(x,y-1);
    if(x-1>=0 && y-1>=0 && graph[x-1][y-1]==1) DFS(x-1,y-1);
    if(x-1>=0 && y+1<M && graph[x-1][y+1]==1) DFS(x-1,y+1);
    if(x+1<N && y-1>=0 && graph[x+1][y-1]==1) DFS(x+1,y-1);
    if(x+1<N && y+1<M && graph[x+1][y+1]==1) DFS(x+1,y+1);
}

int main(void)
{
    int x,y,count;
    while(1)
    {
        count=0;
        scanf("%d %d", &M, &N);
        if(M==0 && N==0) break;
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                scanf("%d", &graph[i][j]);
            }
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(graph[i][j]==1){
                    DFS(i,j);
                    count++;
                }
            }
        }
        init_graph(M,N);
        printf("%d\n", count);
    }

    return 0;
}
