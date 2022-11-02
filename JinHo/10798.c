#include<stdio.h>
#include<string.h>

int main(){
    char s[5][20]={{""}};
    int len=0;

    for(int i=0; i<5; i++){
        gets(s[i]);
        if(len<strlen(s[i])){
            len=strlen(s[i]);
        }
    }

    for(int i=0; i<len; i++){
        for(int j=0; j<5; j++){
            if(s[j][i]!=0){
                printf("%c", s[j][i]);
            }
        }
    }
}