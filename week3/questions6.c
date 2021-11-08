#include<stdio.h>
int main()
{
    int n, x, count=0;
    printf("enter the  value of size \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the value into array \n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value ypu wnt to chcek \n");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        if(x==a[i])
        count++;
        else 
        count=0;
    }
    printf("the number %d has been present %d times ",x,count);
    return 0;
}