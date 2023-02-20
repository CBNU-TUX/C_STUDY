#include <stdio.h>
#define SIZE 1000

void merge_count(int a, int b, int c, int d);

int paper[SIZE][SIZE];
int blue_count=0;
int white_count=0;

int main(void)
{
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=N; j++)
        {
            scanf("%d", &paper[i][j]);
        }
    } 
    merge_count(1,N,1,N);
    printf("%d %d\n", white_count, blue_count);

    return 0;
}

void merge_count(int a, int b, int c, int d)
{
    
    int temp=paper[a][c];
    int count_temp=0;
    for(int i=a; i<=b; i++)
    {
        for(int j=c; j<=d; j++)
        {
            if(temp==paper[i][j])
                count_temp++;
        }
    }
    int square=(b-a+1)*(d-c+1);
    if(square==count_temp)
    {
        if(temp==0)
            white_count++;
        else
            blue_count++;
    }
    else
    {
        int q=(d-c+1)/2-1;
        merge_count(a,a+q,c,c+q);
        merge_count(a,a+q,c+q+1,d);
        merge_count(a+q+1,b,c,c+q);
        merge_count(a+q+1,b,c+q+1,d);
    }
}
