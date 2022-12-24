#include <stdio.h>

void merge_sort(int l,int r);
void merge(int l,int mid,int r);
int x[200],y[200],z[200];

int main(void)
{
    int n,rank[200];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        z[i] = i;
        rank[i] = 1;
        scanf("%d %d", &x[i], &y[i]);
    }
    merge_sort(0,n-1);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(x[i]!=x[j] && y[i]<y[j])
                rank[z[i]]++;
        }
    }
    for(int i=0; i<n-1; i++)
        printf("%d ", rank[i]);
    printf("%d\n", rank[n-1]);
    return 0;
}

void merge_sort(int l,int r)
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
void merge(int l,int mid,int r)
{
    int left,middle,k;
    int temp_x[200],temp_y[200],temp_z[200];
    left=l;
    k=l;
    middle = mid+1;
    while(left<=mid && middle<=r)
    {
        if(x[left]<=x[middle])
        {
            temp_z[k] = z[left];
            temp_y[k] = y[left];
            temp_x[k++] = x[left++];
        }
        else
        {
            temp_z[k] = z[middle];
            temp_y[k] = y[middle];
            temp_x[k++] = x[middle++];
        }
    }
    if(left>mid)
    {
        for(int i=middle; i<=r; i++)
        {
            temp_z[k] = z[i];
            temp_y[k] = y[i];
            temp_x[k++] = x[i];
        }
    }
    else
    {
        for(int i=left; i<=mid; i++)
        {
            temp_z[k] = z[i];
            temp_y[k] = y[i];
            temp_x[k++] = x[i];
        }
    }
    for(int i=l; i<=r; i++)
    {
        z[i] = temp_z[i];
        y[i] = temp_y[i];
        x[i] = temp_x[i];
    }
}
