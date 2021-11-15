#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("enter the size of array \n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements into array\n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the sum you want \n");
    scanf("%d",&sum);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)

             printf("sum found at positions %d, %d ",i,j);   break;
        
        }
    }
    return 0;
}