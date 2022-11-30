#include <stdio.h>

int main(void)
{
    int note[8], n=0;
    for(int i=0; i<8; i++)
    {
        scanf("%d", &note[i]);
    }
    for(int i=0; i<8; i++)
    {
        if((i+1)==note[i]) n++;
        else if((8-i)==note[i]) n--;
    }
    if(n==8) printf("ascending\n");
    else if(n==-8) printf("descending\n");
    else  printf("mixed\n");
    
    return 0;
}
