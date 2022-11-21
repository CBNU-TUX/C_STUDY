//#include <stdio.h>
//
//int main(void)
//{
//    int cnt[10001] = {0,};
//    int N, max=0;
//    scanf("%d", &N);
//    for (int i=0; i<N; i++)
//    {
//        scanf("%d", &cnt[i]);
//        if(cnt[max]<cnt[i])
//        {
//            max = i;
//        }
//    }
//    for(int i=1; i<=cnt[max]; i++)
//    {
//        for(int j=0; j<N; j++)
//        {
//            if(i==cnt[j]) printf("%d\n", i);
//        }
//    }
//    return 0;
//}
#include<stdio.h>

int main(){
    int N;
    int i, j;
    int num;

    int count[10001]={0,};
    scanf("%d", &N);

    for(i=0; i<N ;i++){
        scanf("%d", &num);
        count[num] = count[num] + 1;
    }

    for(i=1; i<10001; i++){
        for(j=1; j<=count[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;




