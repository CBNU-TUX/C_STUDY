#include <stdio.h>

void merge_count(int a, int b, int c, int d);
void merge_countA(int a, int b, int c, int d);
void merge_countB(int a, int b, int c, int d);
void merge_countC(int a, int b, int c, int d);

char input[500][500];
int matrix[500][500];

int main(void)
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s", input[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            matrix[i][j] = input[i][j]-'0';
        }
    }
    merge_count(0,n-1,0,n-1);
    printf("\n");

    return 0;
}
void merge_count(int a, int b, int c, int d)
{
    int temp=0,sum;
    for(int i=a; i<=b; i++)
    {
        for(int j=c; j<=d; j++)
        {
            if(matrix[i][j]==matrix[a][c]){
                temp++;   
            }
        }
    }
    sum=(b-a+1)*(d-c+1);
    if(temp==sum)
    {
        printf("%d\n", matrix[0][0]);
    }
    else
    {
        int segment = (b-a+1)/2-1;
        merge_countA(a,a+segment,c,c+segment);
        merge_countB(a,a+segment,c+segment+1,d);
        merge_countB(a+segment+1,b,c,c+segment);
        merge_countB(a+segment+1,b,c+segment+1,d);
        printf(")");
    }
}
void merge_countA(int a, int b, int c, int d)
{
    int temp=0,sum;
    for(int i=a; i<=b; i++)
    {
        for(int j=c; j<=d; j++)
        {
            if(matrix[i][j]==matrix[a][c])
                temp++;
        }
    }
    sum=(b-a+1)*(d-c+1);
    if(temp==sum)
    {
        printf("(%d",matrix[a][c]);
    }
    else
    {
        printf("(");
        int segment = (b-a+1)/2-1;
        merge_countA(a,a+segment,c,c+segment);
        merge_countB(a,a+segment,c+segment+1,d);
        merge_countB(a+segment+1,b,c,c+segment);
        merge_countB(a+segment+1,b,c+segment+1,d);
        printf(")");
    }
}
void merge_countB(int a, int b, int c, int d)
{
    int temp=0,sum;
    for(int i=a; i<=b; i++)
    {
        for(int j=c; j<=d; j++)
        {
            if(matrix[i][j]==matrix[a][c])
                temp++;
        }
    }
    sum=(b-a+1)*(d-c+1);
    if(temp==sum)
    {
        printf("%d",matrix[a][c]);
    }
    else
    {
        int segment = (b-a+1)/2-1;
        merge_countA(a,a+segment,c,c+segment);
        merge_countB(a,a+segment,c+segment+1,d);
        merge_countB(a+segment+1,b,c,c+segment);
        merge_countB(a+segment+1,b,c+segment+1,d);
        printf(")");
    }
}
