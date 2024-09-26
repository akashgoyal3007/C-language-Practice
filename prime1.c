#include<stdio.h>
void main()
{
int n,i, temp=0;
printf("Enter the no");
scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("Not Prime");
            temp=1;
            break;
        }
    }
    if(temp==0){
        printf("prime");
    }
}