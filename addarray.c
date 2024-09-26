#include<stdio.h>
#define SIZE 20
void main()
{
    int i,n;
    printf("Enter the number");
    scanf("%d\n",&n);
    int arr[SIZE];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }

    
}