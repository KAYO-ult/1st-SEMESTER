// #include <stdio.h>

// int main() {
//   int n, n1 = 0, n2 = 1, n3, i;

//   printf("Enter the number of terms = ");
//   scanf("%d", &n);

//   printf("Fibonacci Series till term %d = ",n);

//   for (i = 1; i <= n; i++) {
//     printf("%d ", n1);
//     n3 = n1 + n2;
//     n1 = n2;
//     n2 = n3;
//   }

//   return 0;
// }






#include <stdio.h>

void fibonacci(int n) {
  int n1 = 0, n2 = 1, n3, i;


  for (i = 1; i <= n; i++) {
    
    printf("%d ",n1);
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
  }
} 

int main() {
    int n;
    
    printf("Enter the number of terms = ");
    scanf("%d",&n);  

    fibonacci(n);

    return 0;
}