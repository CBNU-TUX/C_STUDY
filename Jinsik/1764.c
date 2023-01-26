#include <stdio.h>
#include <string.h>

int count=0;
int rear=0;
char list[500005][25];
void merge_sort(char name[500005][25],int l,int r);
void merge(char name[500005][25],int l,int mid, int r);
void binsearch(char name[500005][25],char check[25],int n);

int main(void)
{
    int N,M;
    char name[500005][25];
    char check[500005][25];
    scanf("%d %d", &N, &M);
    for(int i=0; i<N; i++)
    {
        scanf("%s", name[i]);
    }
    merge_sort(name,0,N-1);
    for(int i=0; i<M; i++)
    {
        scanf("%s", check[i]);
        binsearch(name,check[i],N);
    }
    merge_sort(list,0,rear-1);
    printf("%d\n", rear);
    for(int i=0; i<rear; i++)
    {
        printf("%s\n", list[i]);
    }

    return 0;
}
void binsearch(char name[500005][25],char check[25],int n) 
{
    int low, high;
    int mid;
    low = 0;
    high = n-1;
    while (low <= high) {
        mid = (low + high) / 2;
        if(strcmp(name[mid],check)==0) {            //탐색 성공
            strcpy(list[rear++],check);
            count++;
            break;
        }
        else if(strcmp(check,name[mid])<0) {        //탐색 범위를 아래쪽으로
            high = mid - 1;
        }
        else if (strcmp(check,name[mid])>0) {        //탐색 범위를 위쪽으로
            low = mid + 1;
        }
    }
}
void merge_sort(char name[500005][25],int l,int r)
{
    int mid;
    if(l<r)
    {
        mid=(l+r)/2;
        merge_sort(name,l,mid);
        merge_sort(name,mid+1,r);
        merge(name,l,mid,r);
    }
}
void merge(char name[500005][25],int l,int mid, int r)
{
    char tmp[500005][25];
    int left,q,k;
    left=l;
    q=mid+1;
    k=l;
    while(left<=mid && q<=r)
    {
        if(strcmp(name[left],name[q])<0)
        {
            strcpy(tmp[k++],name[left++]);
        }
        else
        {
            strcpy(tmp[k++],name[q++]);
        }
    }
    if(left>mid)
    {
        for(int i=q; i<=r; i++)
        {
            strcpy(tmp[k++],name[i]);
        }
    }
    else
    {
        for(int i=left; i<=mid; i++)
        {
            strcpy(tmp[k++],name[i]);
        }
    }
    for(int i=l; i<=r; i++)
    {
        strcpy(name[i],tmp[i]);
    }
}
