#include <stdio.h>
#include <string.h>

void merge_sort(int arr[],int l,int r);
void merge(int arr[],int l, int mid, int r);
char word[20000][51];
char temp[20000][51];

int main(void)
{
    int N, L[20000];
    scanf("%d", &N);
    for(int i=0; i<N; i++)
    {
        scanf("%s", word[i]);
        L[i] = strlen(word[i]);
    }
    merge_sort(L,0,N-1);
    for(int i=0; i<N; i++)
    {
        if(i==0 || strcmp(word[i-1],word[i])!=0)
        {
            printf("%s\n", word[i]);
        }
    }

    return 0;
}
void merge_sort(int arr[],int l,int r)
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
    int tem_arr[20000];
    k=l;
    left = l; middle = mid+1;
    while(left <= mid && middle <= r)
    {
        if(arr[left]<=arr[middle])
        {
            if(arr[left]==arr[middle])
            {
                tem_arr[k] = (strcmp(word[left],word[middle])>0)?arr[middle]:arr[left];
                strcpy(temp[k++],((strcmp(word[left],word[middle])>0)?word[middle++]:word[left++]));
            }
            else
            {
                tem_arr[k] = arr[left];
                strcpy(temp[k++],word[left++]);
            }
        } 
        else
        {
            tem_arr[k] = arr[middle];
            strcpy(temp[k++], word[middle++]);
        }
    }
    if(left>mid)
    {
        for(int i=middle; i<=r; i++)
        {
            tem_arr[k] = arr[i];
            strcpy(temp[k++],word[i]);
        }
    }
    else
    {
        for(int i=left; i<=mid; i++)
        {
            tem_arr[k] = arr[i];
            strcpy(temp[k++], word[i]);
        }
    }
    for(int i=l; i<=r; i++)
    {
        arr[i] = tem_arr[i];
        strcpy(word[i], temp[i]);
    }
}
