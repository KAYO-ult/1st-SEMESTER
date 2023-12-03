#include<stdio.h>

int main() {
    int n, m;
    printf("Enter no. rows = ");
    scanf("%d", &n);
    printf("Enter no. * in a rows = ");
    scanf("%d", &m);

    for (int i = 1; i <=n; i++)                   // No. of Rows       (Outer loop)
    {
        for (int i = 1; i <= m; i++)              // No. of columns    (Inner loop)
        {
            printf("*");
        }
        printf("\n");
    }
     return 0;
}