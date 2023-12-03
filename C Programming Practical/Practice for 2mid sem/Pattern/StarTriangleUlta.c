#include<stdio.h>

int main() {
    int n;
    printf("Enter no. rows = ");
    scanf("%d", &n);
//    printf("Enter no. of columns = ");
//    scanf("%d", &m);

    for (int i = 1; i <=n; i++)                           // No. of Rows       (Outer loop)
    { 
        for (int j = 1; j <= n + 1 - i; j++)              // No. of columns    (Inner loop)
        {
            printf("*");
        }
        printf("\n");
    }
     return 0;
}



// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter no. rows = ");
//     scanf("%d", &n);
//     int a = n;
// //    printf("Enter no. of columns = ");
// //    scanf("%d", &m);

//     for (int i = 1; i <=n; i++)                           // No. of Rows       (Outer loop)
//     {
//         for (int j = 1; j <= a; j++)              // No. of columns    (Inner loop)
//         {
//             printf("*");
//         }
//         a--;
//         printf("\n");
//     }
//      return 0;
// }