#include<stdio.h>
int main() {
    int n1, n2, i, gcd = 1;
    
    printf("Enter any two number = ");
    scanf("%d%d",&n1,&n2);

    for (i = 1; i <= n1 && i <= n2 ; i++)
    {
        if (n1 % i == 0 && n2 % i == 0) {
        gcd = i;
        }
    }
    printf("The GCD is = %d", gcd);

    return 0;
}


//__________________________________________________________________________________________________________________________


// #include<stdio.h>
// int gcd(int n1, int n2) {
//     int gcd = 1;
//     for (int i = 1; i <= n1 && i <= n2 ; i++)
//     {
//         if (n1 % i == 0 && n2 % i == 0) {
//         gcd = i;
//         }
//     }
//     return gcd;
// }

// int main() {
//     int n1, n2;
//     printf("Enter any two number = ");
//     scanf("%d%d",&n1,&n2);

//     gcd(n1,n2);
//     printf("The GCD is = %d", gcd(n1,n2));

//     return 0;
// }