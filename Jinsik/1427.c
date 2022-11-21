#include <stdio.h>
#include <string.h>

int main(void)
{
    
    char number[10001] = {0};
    int temp;
    scanf("%s", number);
    unsigned long len = strlen(number);
    for(int i=0; i<len; i++)
    {
        for(int j=i; j<len; j++)
        {
            if(number[i] < number[j])
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
    for(int i=0; i<len; i++)
    {
        printf("%c", number[i]);
    }
    printf("\n");
    return 0;
    
}
