#include<stdio.h>

int main(){
    int n;
    int i=1;

    scanf("%d", &n);
    while(1){
        if(n>3){
            n-=3;
        }
        else{
            n-=1;
        }
        if(n==0){
            break;
        }
        printf("%d\n", n);
        i++;
    }

    if(i%2==0){
        printf("SK");
    }
    else{
        printf("CY");
    }

    return 0;
}