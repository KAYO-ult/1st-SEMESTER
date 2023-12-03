#include <stdio.h>
int main() {
    int a=2;
    int b=++a; //pre increment
    int c=2;   //post increment
    int d=c++;
    printf("pre increment = %d\n post increment = %d",b,d);
return 0;
}