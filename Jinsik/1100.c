#include <stdio.h>

int main(void)
{
    char chess[9][9], count=0;
    for(int i=0; i<8; i++)
    {
        scanf("%s", chess[i]);
    }
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(i%2==0)
            {
                if((j+1)%2==1 && chess[i][j] == 'F')
                {
                    count++;
                    continue;
                }
            }
            else if(i%2==1)
            {
                if((j+1)%2==0 && chess[i][j] == 'F')
                {
                    count++;
                    continue;
                }
            }
        }
    }
    printf("%d\n", count);
    
    return 0;
}
