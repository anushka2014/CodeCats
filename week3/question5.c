#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("enter the no of elements you want in the array \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the values in array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    for(int i=0;i<n;i++)
    {
       sum = (sum+a[i]);
       
    }
     printf("the sum of the array is %d",sum);
    
    return 0;
}