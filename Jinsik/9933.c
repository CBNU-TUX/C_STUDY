#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    char key[15];
    char passwd[101][15];

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%s", passwd[i]);
    }
    for(int i=0; i<n; i++)
    {
        int check[100] ={0};    //for checking if have the same number of characters
        strcpy(key,passwd[i]);
        for(int j=0; j<n; j++)
        {
            if(strlen(passwd[j]) == strlen(key))
                check[j] = 1;   // same
        }
        for(int k=0; k<n; k++)
        {
            int count=0;
            if(check[k] == 1)
            {
                for(int l=0; l<strlen(passwd[k])/2; l++)
                {
                    if(key[l] == passwd[k][strlen(passwd[k])-l-1])
                        count++;
                }
                if(count == strlen(passwd[k])/2)
                {
                    printf("%lu %c\n", strlen(key), key[strlen(key)/2]);
                    return 0;
                }
            }
        }
    }
    
    return 0;
}
