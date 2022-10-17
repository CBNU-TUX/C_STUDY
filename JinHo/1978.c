#include<stdio.h>

int main(){
    int n[200]={0};
    int k;

    scanf("%d", &k);

    for(int i=0; i<k; i++){
        scanf("%d", &n[i]);
    }

    int check=0;
    for(int i=0; i<k; i++){
        int count=0;
        for(int j=n[i]; j>0; j--){
            if(n[i]%j==0){
                count++;
            }
        }
        if(count==2){
            check++;
        }
    }
    printf("%d", check);
    return 0;

}