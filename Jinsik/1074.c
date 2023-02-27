#include <stdio.h>

void merge_count(int a, int b, int c, int d, int r, int l);
int order=0;
int end=0;
int r,c;

int main(void)
{
    int N,square=1;
    scanf("%d %d %d", &N, &r, &c);
    for(int i=0; i<N; i++)
        square*=2;
    if(N==1){
        for(int i=0; i<square; i++)
        {
            for(int j=0; j<square; j++)
            {
                if(i==r && j==c)
                {
                    printf("%d\n", order);
                    break;
                }
                order++;
            }
        }
    }
    else
    {
        merge_count(0,square-1,0,square-1,r,c);
    }

    return 0;
}
void merge_count(int a, int b, int c, int d, int r, int l){
    int size=(b-a+1)*(d-c+1);
    if(a<=r && r<=b && c<=l && l<=d && size==4 && end==0)
    {
        for(int i=a; i<=b; i++)
            {
                for(int j=c; j<=d; j++)
                {
                    if(i==r && j==l){
                        end=1;
                        printf("%d\n", order);
                    }
                    order++;
                }
            }
    }
    else if(size!=4 && a<=r && r<=b && c<=l && l<=d && end==0)
    {
        int segment = (b-a+1)/2-1;
        merge_count(a,a+segment,c,c+segment,r,l);
        merge_count(a,a+segment,c+segment+1,d,r,l);
        merge_count(a+segment+1,b,c,c+segment,r,l);
        merge_count(a+segment+1,b,c+segment+1,d,r,l);
    }
    else if(end==0)
    {
        order=order+size;
    }
}
