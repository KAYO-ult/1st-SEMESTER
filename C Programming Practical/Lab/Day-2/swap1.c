#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter any two numbers");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The sgccwapping number is\na=%d\nb=%d",a,b);
    return 0;
}