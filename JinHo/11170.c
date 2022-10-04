#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);

    int n[20]={0};
    int m[20]={0};
    int count[20]={0};

    for(int i=0; i<t; i++){
        scanf("%d %d", &n[i], &m[i]);
    }

    for(int i=0; i<t; i++){
        char s[1][10]={{""}};
        for(int j=n[i]; j<=m[i]; j++){
            sprintf(s[0], "%d", j);
            for(int k=0; k<strlen(s[0]); k++){
                if(s[0][k]=='0'){
                    count[i]++;
                }
            }
        }
    }

    for(int i=0; i<t; i++){
        printf("%d\n", count[i]);
    }
    return 0;
    
}