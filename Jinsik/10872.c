#include <stdio.h>

int factorial(int n);

int main(void)
{
    int number, fact;  
    scanf("%d", &number);   
    fact = factorial(number);  
    printf("%d\n", fact);  
    return 0;
}

int factorial(int n)
{
    if(n==0) return 1;
    else{
        return (n*factorial(n-1));
    }
}
