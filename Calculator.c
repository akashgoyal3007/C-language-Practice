#include<stdio.h>
void main()
{
int a,b,res;
printf("Enter first number :\n");
scanf("%d",&a);
printf("Enter Second Number:\n");
scanf("%d",&b);
res=a+b;
printf("Addition: %d\n",res);
res=a-b;
printf("Substraction: %d\n",res);
res=a*b;
printf("Multiplication: %d\n",res);
res=a/b;
printf("Division: %d\n",res);
res=a%b;
printf("Modulus: %d\n",res);
}