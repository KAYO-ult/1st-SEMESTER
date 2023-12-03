#include<stdio.h>
int sum (int a, int b) {
    int c = a + b;
    return c;
}
int main () {
    int n1,n2;
    printf("Enter any 2 no. = ");
    scanf("%d%d",&n1,&n2);
    int res = sum(n1,n2);
    printf("Result = %d",res);
    return 0;
}
