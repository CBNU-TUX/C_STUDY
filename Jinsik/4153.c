#include <stdio.h>

int main(void)
{
    int x,y,z;
    int max;
    while(1)
    {
        int sum=0;
        scanf("%d %d %d", &x, &y, &z);
        if(x==0 && y==0 && z==0) break;
        max = (x>y)?((x>z)?x:z):((y>z)?y:z);
        if(max==x)
            sum = (y*y)+(z*z);
        else if(max==y)
            sum = (x*x)+(z*z);
        else
            sum = (x*x)+(y*y);
        if(sum==(max*max)) printf("right\n");
        else if(sum!=(max*max))printf("wrong\n");
    }

    return 0;
}
