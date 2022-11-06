#include<stdio.h>
#include<string.h>

void add(int x, int *s){
    s[x-1]=x;
}

void removing(int x, int *s){
    s[x-1]=0;
}

int check(int x, int *s){
    if(s[x-1]==x){
        return 1;
    }
    else{
        return 0;
    }
}

void toggle(int x, int *s){
    if(s[x-1]==x){
        s[x-1]=0;
    }
    else if(s[x-1]==0){
        s[x-1]=x;
    }
}

void all(int *s){
    for(int i=1; i<=20; i++){
        s[i-1]=i;
    }
}

void empty(int *s){
    for(int i=1; i<=20; i++){
        s[i-1]=0;
    }
}

int main(){
    int s[20]={0};
    int t, x;
    char cal[10]={""};

    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%s %d", cal, &x);
        if(strcmp(cal, "add")==0){
            add(x, s);
        }
        else if(strcmp(cal, "remove")==0){
            removing(x, s);
        }
        else if(strcmp(cal, "check")==0){
            printf("%d\n", check(x, s));
        }
        else if(strcmp(cal, "all")==0){
            all(s);
        }
        else if(strcmp(cal, "toggle")==0){
            toggle(x, s);
        }
        else if(strcmp(cal, "empty")==0){
            empty(s);
        }
    }
}