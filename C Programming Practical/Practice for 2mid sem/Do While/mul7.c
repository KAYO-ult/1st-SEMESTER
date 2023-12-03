#include<stdio.h>

int main() {
    int n;
    do
    {
        printf("Check if the no. is divisible by 7 = ");
        scanf("%d", &n);
//        printf("%d is not divisible by 7\n", n);

        if (n % 7 == 0)
        {
            printf("%d is divisible by 7", n);
            break;
        }
           
    } while (1);
    printf("\nHEHEHEH!!!!!");

    return 0;
}