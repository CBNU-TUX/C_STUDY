#include <stdio.h>

int main(void)
{
    int phone, fee1=0, fee2=0, time[20];

    scanf("%d", &phone);
    for(int i=0; i<phone; i++)
    {
        scanf("%d", &time[i]);
    }
    for(int i=0; i<phone; i++)
    {
        if(time[i]/30==0) fee1 += 10;
        else fee1 += (time[i]/30+1)*10;

        if(time[i]/60==0) fee2 += 15;
        else fee2 += (time[i]/60+1)*15;
    }
    if(fee1 > fee2) printf("%c %d\n", 'M', fee2);
    else if(fee1 < fee2) printf("%c %d\n", 'Y', fee1);
    else printf("%c %c %d\n", 'Y', 'M', fee1);

    return 0;
}
