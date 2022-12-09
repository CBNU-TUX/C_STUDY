#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void merge_sort(int arr[], int l, int r);
void merge(int arr[], int l, int mid, int r);
char name[100000][101]; char tem[100000][101];
int order[100000];

int main(void)
{
    int num, age[100000];
    scanf("%d", &num);
    for(int i=0; i<num; i++)
    {
        scanf("%d %s", &age[i], name[i]);
        order[i] = i;
    }
    merge_sort(age,0,num-1);
    for(int j=0; j<num; j++)
    {
        printf("%d %s\n", age[j], name[j]);
    }

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
    int left,middle,k;
    int temp[100000];
    k=l;
    left = l; middle = mid+1;
    while(left <= mid && middle <= r)
    {
        if(arr[left]<=arr[middle])
        {
            if(arr[left]==arr[middle])
            {
                strcpy(tem[k],(order[left]<order[middle])?name[left]:name[middle]);
                temp[k++] = (order[left]<order[middle])?arr[left++]:arr[middle++];
            }
            else
            {
                strcpy(tem[k],name[left]);
                temp[k++] = arr[left++];
            }
        } 
        else
        {
            strcpy(tem[k], name[middle]);
            temp[k++] = arr[middle++];
        }
    }
    if(left>mid)
    {
        for(int i=middle; i<=r; i++)
        {
            strcpy(tem[k],name[i]);
            temp[k++] = arr[i];
        }
    }
    else
    {
        for(int i=left; i<=mid; i++)
        {
            strcpy(tem[k], name[i]);
            temp[k++] = arr[i];
        }
    }
    for(int i=l; i<=r; i++)
    {
        arr[i] = temp[i];
        strcpy(name[i], tem[i]);
    }
}
