#include <stdio.h>
int P[1050];

void merge_sort(int l, int r);
void merge(int l, int mid, int r);

int main(void)
{
    int N,temp=0,sum=0;
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &P[i]);
    }
    merge_sort(0,N-1);
    for(int i=0; i<N; i++)
    {
        temp+=P[i];
        sum+=temp;
    }
    printf("%d\n",sum);

    return 0;
}

void merge(int l, int mid,int r)
{
    int left,q,k;
    int tmp[1050];
    k=l;
    left=l;
    q=mid+1;
    while(left<=mid && q<=r)
    {
        if(P[left]<=P[q])
            tmp[k++]=P[left++];
        else
            tmp[k++]=P[q++];
    }
    if(left>mid)
    {
        for(int i=q; i<=r; i++)
        {
            tmp[k++]=P[i];
        }
    }
    else
    {
        for(int i=left; i<=mid; i++)
        {
            tmp[k++]=P[i];
        }
    }
    for(int i=l; i<=r; i++)
    {
        P[i]=tmp[i];
    }
}
void merge_sort(int l, int r)
{
    int mid;
    if(l<r)
    {
        mid = (l+r)/2;
        merge_sort(l,mid);
        merge_sort(mid+1,r);
        merge(l,mid,r);
    }
}
