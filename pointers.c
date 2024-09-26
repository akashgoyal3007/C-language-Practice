#include<stdio.h>
void main()
{
    int a=5;
    char ch='A';
    double c=86.44;
    int *p1=&a;
    char *p2=&ch;
    double *p3=&c;
    printf("value of a %d\n",a);
    printf("address of a %d\n",&a);
    printf("value of p1 %d\n",p1);
    printf("value of &p1 %d\n",&p1);
    printf("value of *p1 %d\n",*p1);
    printf("value of ch %c\n",ch);
    printf("address of ch %d\n",&ch);
    printf("value of p2 %d\n",p2);
    printf("value of &p2 %d\n",&p2);
    printf("value of *p2 %c\n",*p2);
    printf("value of c %d\n",c);
    printf("address of c %d\n",&c);
    printf("value of p3 %d\n",p3);
    printf("value of &p3 %d\n",&p3);
    printf("value of *p3 %d\n",*p3);



}