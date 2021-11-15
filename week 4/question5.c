#include<stdio.h>
int main()
{
    int n, temp ;
    printf("enter the size \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array  only 0 ,1 and 2 \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
       for (int j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
         {
             temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
       }
       
    }
    printf("sorted array 0 ,1 ,2 \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}