#include<stdio.h>
#include<string.h>

int main(){
    int n; 
    int count=0;
    long long j=666;
    char check[100]={""};

    scanf("%d", &n);
    
    while(1){
        sprintf(check, "%d", j);
        if(strstr(check, "666") != 0){
            count++;
        }
        if(n==count){
            break;
        }
        j++;
    }

    printf("%d", j);
    return 0;
}