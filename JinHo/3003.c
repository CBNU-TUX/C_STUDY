#include<stdio.h>

int main(){
    int che[6]={0};

    for(int i=0; i<6; i++){
        scanf("%d", &che[i]);
    }

    int check[6]={1, 1, 2, 2, 2, 8};
    for(int i=0; i<6; i++){
        che[i]=check[i]-che[i];
    }

    for(int i=0; i<6; i++){
        printf("%d ", che[i]);
    }
}