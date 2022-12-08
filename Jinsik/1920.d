#include <stdio.h>

 void merge_sort(long arr[], long l, long r);
 void merge(long arr[], long l, long mid, long r);

int main(void)
{
    int N,M;
    long A[100000], B[100000];
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%ld", &A[i]);
    }
    scanf("%d", &M);
    for(int i=0; i<M; i++)
    {
        scanf("%ld", &B[i]);
    }
    merge_sort(A,0,N-1);
    for(int i=0; i<M; i++)
    {
        long low=0;
        long high=N-1;
        while(1)
        {
            long mid;
            mid = (high+low)/2;
            if(A[mid] == B[i]){
                printf("1\n");
                break;
            }
            else if(low>high){
                printf("0\n");
                break;
            }
            else if (A[mid] > B[i]){
                high = mid - 1;  
            }
            else {
                low = mid + 1;
            }
        }
    }
    return 0;
}
void merge_sort(long arr[], long l, long r)
{
    long mid;
    if(l<r)
    {
        mid = (l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
void merge(long arr[], long l, long mid, long r)
{
    long left,q,right,k;
    long temp[100000];
    k=l;
    left = l;
    q = mid+1;
    right = r;
    while(left<=mid && q<=r)
    {
        if(arr[left] <= arr[q])
            temp[k++] = arr[left++];
        else
            temp[k++] = arr[q++];
    }
    if(left>mid)
    {
        for(int i=q; i<=r; i++)
        {
            temp[k++] = arr[i];
        }
    }
    else
    {
        for(int i=left; i<=mid; i++)
        {
            temp[k++] = arr[i];
        }
    }
    for(int i=l; i<=r; i++)
    {
        arr[i] = temp[i];
    }
}
