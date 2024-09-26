#include<stdio.h>
void main()
{

    int i,j,r,c;
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        for(j=i;j<=c;j++)
        {
        printf("*");
        }
        printf("\n");
    }

}