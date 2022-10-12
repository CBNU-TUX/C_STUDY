#include<stdio.h>

int main(){
    int n[8]={0};
    int check[5]={0};
    int sum=0;

    for(int i=0; i<8; i++){
        scanf("%d", &n[i]);
    }

    for(int i=0; i<5; i++){
        int max=0;
        for(int j=0; j<8; j++){
            if(max<n[j]){
                max=n[j];
                check[i]=j+1;
            }
        }
        sum+=max;
        n[check[i]-1]=0;
    }

    int temp;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(check[i]>check[j]){
                temp=check[i];
                check[i]=check[j];
                check[j]=temp;
            }
        }
    }

    printf("%d\n", sum);
    for(int i=0; i<5; i++){
        printf("%d ", check[i]);
    }

    return 0;



}