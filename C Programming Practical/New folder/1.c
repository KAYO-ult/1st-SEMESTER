#include <stdio.h>
int main() 
{
    char name;
    int roll_no;
    float sub1,sub2,sub3,sub4,p;
    printf("Enter the name of the student = ");
    scanf("%5c",&name);
    printf("\nEnter the Roll No of the student = ");
    scanf("%d",&roll_no);
    printf("\nEnter any 4 marks = ");
    scanf("%f%f%f%f",&sub1,&sub2,&sub3,&sub4);
    p=((sub1+sub2+sub3+sub4)/400)*100;
    printf("percentage is = %.2f",p);
    return 0;
}