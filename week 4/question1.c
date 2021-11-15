#include<stdio.h>
int main()
{
    int n;
    printf("enter the size \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array in reverse order\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}