#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    long long a=0; 
    long long b=1;
    long long sum=0;

    if(n==1){
        printf("1");
    }
    else{
        for(int i=1; i<n; i++){
            sum=a+b;
            if(i%2!=0){
                a=sum;
            }
            else{
                b=sum;
            }
        }
        printf("%lld", sum);
    }
    return 0;
}