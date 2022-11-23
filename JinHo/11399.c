#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int p[1000]={0};
    for(int i=0; i<n; i++){
        scanf("%d", &p[i]);
    }

    int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(p[i]>p[j]){
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }

    int sum=0;
    int count=0; 
    for(int i=0; i<n; i++){
        int check=0;
        for(int j=0; j<=count; j++){
            check+=p[j];
        }
        count++;
        sum+=check;
    }

    printf("%d", sum);
    return 0;
}