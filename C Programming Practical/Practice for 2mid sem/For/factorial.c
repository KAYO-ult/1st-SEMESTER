#include<stdio.h>

int main() {
    int n, fact = 1;
    printf("Factoral of = ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is = %d", n, fact);

    return 0 ;
}           