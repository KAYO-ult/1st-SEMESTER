// While loop 
// initialisation
// while (condition) {
//    print("Something")
//    updation
// "i" is an iterator or a counter

#include<stdio.h>

int main() {
    int n;
    printf("enter no = ");
    scanf("%d",&n);

    int i=0;
    while (i<=n) {
        printf("%d", i);
        i++;
    }
    
    return 0;
}