#include<stdio.h>
int main()
{
    int n,largest,smallest;
    printf("enter the value of size of array \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the values into the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    largest = smallest =a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        largest =a[i];  
        if(a[i]<smallest)
        smallest =a[i];

    }
    printf("largest no is %d \n",largest);
    printf("the smallest no is %d ",smallest);
    return 0;
}