#include<stdio.h>

int main(){
    int n;
    int call[20]={0};
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &call[i]);
    }

    int y=n, m=n;
    for(int i=0; i<n; i++){
        y+=call[i]/30;
    }
    for(int i=0; i<n; i++){
        m+=call[i]/60;
    }

    y*=10;
    m*=15;

    if(y>m){
        printf("M %d", m);
    }
    else if(y==m){
        printf("Y M %d", y);
    }
    else{
        printf("Y %d", y);
    }

    return 0;
}