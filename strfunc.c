#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    int len;
    printf("Enter a string\n");
    scanf("%s",str);
    printf("The entered string is %s\n",str);
    len=strlen(str);
    printf("Length of string is %d\n",len);  
    printf("Uppercase string is %s\n",strupr(str));
    printf("Lowercase string is %s\n",strlwr(str));
    printf("reverse string is %s\n",strrev(str));
}