#include <stdio.h>

void merge_count(int a, int b, int c, int d);
int matrix[2190][2190];
int result[3];
int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    merge_count(0,n-1,0,n-1);
    for(int i=0; i<3; i++)
        printf("%d\n", result[i]);

    return 0;
} 
 
void merge_count(int a, int b, int c, int d) 
{
    printf("called\n");
    int count=0,total=0,tmp;
    for(int i=a;i<=b;i++)
        {
            for(int j=c;j<=d;j++)
            {
                total++;
                printf("%d", matrix[i][j]);
                if(matrix[a][c]==matrix[i][j])
                    count++;
            }
            printf("\n");
        }
        printf("\n");
    if(count==total)
    {
        if(matrix[a][c]==-1)
        {
            result[0]+=1;
        }
        else if(matrix[a][c]==0)
        {
            result[1]+=1;
        }
        else if(matrix[a][c]==1)
        {
            result[2]+=1;
        }
    }
    else if(total==9)
    {
        for(int i=a;i<=b;i++)
        {
            for(int j=c;j<=d;j++)
            {
                if(matrix[i][j]==-1)
                {
                    result[0]+=1;
                }
                else if(matrix[i][j]==0)
                {
                    result[1]+=1;
                }
                else if(matrix[i][j]==1)
                {
                    result[2]+=1;
                }
            }
        }
    }
    else
    {
        tmp=(b-a+1)/3;
        printf("tmp:%d\n", tmp);
        merge_count(a,a+tmp-1,c,c+tmp-1);
        merge_count(a,a+tmp-1,c+tmp,c+2*tmp-1);
        merge_count(a,a+tmp-1,c+2*tmp,c+3*tmp-1);
        merge_count(a+tmp,a+2*tmp-1,c,c+tmp-1);
        merge_count(a+tmp,a+2*tmp-1,c+tmp,c+2*tmp-1);
        merge_count(a+tmp,a+2*tmp-1,c+2*tmp,c+3*tmp-1);
        merge_count(a+2*tmp,a+3*tmp-1,c,c+tmp-1);
        merge_count(a+2*tmp,a+3*tmp-1,c+tmp,c+2*tmp-1);
        merge_count(a+2*tmp,a+3*tmp-1,c+2*tmp,c+3*tmp-1);
    }
}
