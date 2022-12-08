#include <stdio.h>

void merge_sort(int arr[], int l, int r);
void merge(int arr[], int l, int mid, int r);

int main(void)
{
    int arr[5], sum=0, mid;
    mid = 5/2;
    for(int i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
        
        sum += arr[i];
    }
    printf("%d\n", sum/5);
    merge_sort(arr,0,4);
    printf("%d\n", arr[mid]);

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
    int left,middle,right,k,temp[10];
    k=l;
    left = l;
    middle = mid+1;
    right = r;
    while(left<=mid && middle<=right)
    {
        if(arr[left] <= arr[middle])
        {
            temp[k++] = arr[left++];
        }
        else
        {
            temp[k++] = arr[middle++];
        }
    }
    if(left>mid)
    {
        for(int i=right; i<=r; i++)
        {
            temp[k++] = arr[i];
        }
    }
    else
    {
        for(int i=left; i<=mid; i++)
            temp[k++] = arr[i];
    }
    for(int i=l; i<=r; i++)
    {
        arr[i] = temp[i];
    }
}
