#include <stdio.h>
#include <string.h>


int main(void) {

    char arr[1000000];
    int a, cnt = 0, b;

    scanf("%[^\n]", arr);
    b = strlen(arr);

    if (b == 1){
        if (arr[a] == ' ') {
            printf("0\n");
            return 0;
        }
    }

    for (a = 1; a < b - 1; a++){
        if (arr[a] == ' ') {
            cnt++;
        }
    }

    printf("%d", cnt + 1);
}