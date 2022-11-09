#include <stdio.h>

int main(void)
{
    char a[100];
    scanf("%s", a);
    for (int i = 97; i <= 122; i++) {
        int j = 0;
        while (a[j] != 0) {
            if (a[j] == i)
                break;
            j++;
        }
        if (a[j] == i) {
            printf("%d ", j);
        }
        else
            printf("-1 ");
    }
}