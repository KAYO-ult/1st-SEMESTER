/* 1. Initialize sum = 0
   2. Extract the last digit of the number and add it to the sum (sum += num % 10)
   3. Reduce the number  (num = num / 10
   4. Keep doing this until num becomes 0 */

/* #include <stdio.h>
int main() 
{
  int n, sum = 0, r;

  printf("Enter a number\n");
  scanf("%d", &n);

  for (;n > 0; n = n / 10) {
    r = n % 10;
    sum = sum + r;
  }
  printf("Sum of digits of a number = %d\n", sum);
  return 0;      
} */

  
#include<stdio.h>  
 int main()    
{    
int n,sum=0,r;    
printf("Enter a number:");    
scanf("%d",&n);    
while (n>0)    {    
   r=n%10;    
   sum=sum+n;    
   n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}   