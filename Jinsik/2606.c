#include <stdio.h>
#define SIZE 100

int computer[SIZE][SIZE];
int visited[SIZE];
int count=0;

void DFS(int cur, int n)
{
    visited[cur]=1;
    for(int i=1; i<=n; i++){
        if(computer[cur][i]==1 && visited[i]==0){
            count++;
            DFS(i,n);
        }
    }

}

int main(void)
{
    int M,N,x,y;
    scanf("%d", &M);
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d %d", &x, &y);
        computer[x][y]=1;
        computer[y][x]=1;
    }
    DFS(1,M);
    printf("%d\n", count);
    
    return 0;
}
