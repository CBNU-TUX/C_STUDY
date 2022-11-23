#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    char c[21];

    scanf("%d", &a);
    
    while (a--) {
        scanf("%d %s", &b, c);

        
        for (int i = 0; i < strlen(c); i++) {
            for (int j = 0; j < b; j++)
                printf("%c", c[i]);
        }

        printf("\n");
    }
    
}
