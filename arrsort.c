#include<stdio.h>
#define MAX 20
void main()
{
    int i,j,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int arr[MAX];
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
    
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                
            }
        }
    }
    
        
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}