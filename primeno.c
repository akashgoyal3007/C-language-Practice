#include<stdio.h>
void main()
{
int n;
printf("Enter the no");
scanf("%d",&n);
if(n%n==0 && n%2==1 )
{
    printf("The No %d is a prime no",n);
    
}
else
{
    printf("The no %d not a prime",n);
}
}