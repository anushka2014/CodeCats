#include<stdio.h>
int main()
{
    int n,x, temp ;
    printf("enter the size \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the search value\n");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
       for (int j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
         {temp=a[i];
         a[i]=a[j];
         a[j]=temp;
         }
       }
       

    }
    printf("sorted array \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(x==a[i])
       {
           printf("%d found at %d",x,i);  break;
       }  
        
    }
    return 0;
    
}