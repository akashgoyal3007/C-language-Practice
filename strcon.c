#include<stdio.h>
#include<string.h>
void main()
{

    char str1[10];
    char str2[10];
    printf("Enter 1st string");
    gets(str1);
    printf("Enter 2nd String");
    gets(str2);
    printf("String 1 is %s\n",str1);
    printf("String 2 is %s\n",str2);
    printf("Concat string %s",strcat(str1,str2));


}