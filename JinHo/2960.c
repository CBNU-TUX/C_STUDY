#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);

    int check[1005]={0};
    for(int i=2; i<=n; i++){
        check[i]=i;
    }

    int count=0;
    for(int i=2; i<=n; i++){
        for(int j=1; i*j<=n; j++){
            count++;
            if(check[i*j]==0){
                count--;
            }
            
            check[i*j]=0;
            if(count==k){
                printf("%d", i*j);
                return 0;
            }
        }
    }

}