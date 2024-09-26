#include<stdio.h>
int add(int *res);
void main()
{
    int a,b;
    printf("Enter two numbers for addition:");
    scanf("%d%d",&a,&b);
    add(res);
}
void add(int *res)
{
    int a;
    int b;
    *res= a + b;
    return *res;
}