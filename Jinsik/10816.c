#include <stdio.h>

void merge_sort(int arr[], int l, int r);
void merge(int arr[], int l, int mid, int r);

int main(void)
{
    int N,M,low,high,mid,result,a,b,count;
    int card[50000], check[50000];
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%d", &card[i]);
    }
    merge_sort(card,0,N-1);
    scanf("%d", &M);
    for(int i=0; i<M; i++)
    {
        scanf("%d", &check[i]);
    }
    for(int i=0; i<M; i++)
    {
        count = 0;
        low = 0;
        high = N-1;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(card[mid] == check[i])
            {
                result = mid;
                count++;
                break;
            }
            else if(card[mid]>check[i])
            {
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        if(count==1)
        {
            int m,start=0,end=N-1;
            while(start<end)
            {
                m = (start+end)/2;
                if(check[i]<=card[m])
                    end = m;
                else
                    start = m+1;
            }
            a=end;
            start=0,end=N-1;
            while(start<end)
            {
                m = (start+end)/2;
                if(check[i]<card[m])
                    end = m;
                else
                    start = m+1;
            }
            
            if(card[end]==check[i])
                b=end+1;
            else
                b=end;
            count = b-a;
        }
        printf("%d ",count);
    }
    printf("\n");

    return 0;
}
void merge_sort(int arr[], int l, int r)
{
    int mid;
    if(l<r)
    {
        mid = (l+r)/2;
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
void merge(int arr[], int l, int mid, int r)
{
    int left,q,right,k;
    int temp[50000];
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
