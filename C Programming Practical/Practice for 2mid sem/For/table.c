#include<stdio.h>

int main() {
    int n,i,j,ans;
    printf("Table of = ");
    scanf("%d", &n);
    printf("Unto = ");
    scanf("%d", &j);

    for (i = 1; i <= j; i++)              //  for (i = j; i >= 1; i--)    reverse oder
    {
        ans = n * i;                      
        printf("\n%d", ans);
    }
    return 0;
}