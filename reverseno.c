#include<stdio.h>
int main()
{
    int n;
    printf("enter the no of elements you want to print in reverse order \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the values");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("REVERSE ORDER \n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}