#include<stdio.h>
int main () {

    int a = 25;
    int *p = &a;

    printf("Address of oparator for varriable 'a' = %p\n",&a);
    printf("Address of oparator for varriable 'a' = %u\n",&a);
    printf("Address value of 'a' is stored in 'p' = %u\n\n",p);

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d", *(&a));

    return 0;
}