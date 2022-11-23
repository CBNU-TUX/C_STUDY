#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[105]={""};
    gets(s);

    for(int i=0; i<strlen(s); i++){
        int check;
        if(isalpha(s[i])!=0){
            if(isupper(s[i])!=0){
                if(s[i]+13>'Z'){
                    check='Z'-s[i];
                    check=13-check-1;
                    s[i]='A'+check;
                }
                else{
                    s[i]+=13;
                }   
            }
            else{
                if(s[i]+13>'z'){
                    check='z'-s[i];
                    check=13-check-1;
                    s[i]='a'+check;
                }
                else{
                    s[i]+=13;
                }   
            }
        }
    }

    printf("%s", s);
    return 0;

}