#include<stdio.h>
int main()
{
    int n, var,count =0;
    printf("enter the array size \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the value in array \n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
    
       for (int j=0;j<n;j++)
       {
           if (a[i]==a[j])
               count++;
       }
        printf("the value of %d is printed %d times \n",a[i],count);

    }

    return 0;

}