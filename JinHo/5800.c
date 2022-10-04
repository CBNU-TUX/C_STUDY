#include<stdio.h>

int main(){
    int k, n;
    scanf("%d", &k);

    int max[101]={0};
    int min[101]={0};
    int lag[101]={0};

    for(int i=0; i<k; i++){
        int score[100]={0};
        scanf("%d", &n);
        int max_check=0;
        int min_check=100;
        int lag_check=0;

        for(int j=0; j<n; j++){
            scanf("%d", &score[j]);
        }
        for(int x=0; x<n; x++){
            if(score[x]>max_check){
                max_check=score[x];
            }
        }
        max[i]=max_check;
        for(int s=0; s<n; s++){
            if(score[s]<min_check){
                min_check=score[s];
            }
        }
        min[i]=min_check;

        int temp;
        for(int o=0; o<n; o++){
            for(int p=o+1; p<n; p++){
                if(score[o]>score[p]){
                    temp=score[o];
                    score[o]=score[p];
                    score[p]=temp;
                }
            }
        }
        if(n==2){
            lag[i]=score[1]-score[0];
        }
        else{
            for(int la=1; la<n-1; la++){
                if(score[la]-score[la-1]>lag_check){
                    lag_check=score[la]-score[la-1];
                }
                if(score[la+1]-score[la]>lag_check){
                    lag_check=score[la+1]-score[la];
                }
            }
            lag[i]=lag_check;
        }
    }

    for(int i=0; i<k; i++){
        printf("Class %d\n", i+1);
        printf("Max %d, Min %d, Largest gap %d\n", max[i], min[i], lag[i]);
    }
    return 0;
}