#include<stdio.h>
int main()
{
    int fact=1, n;
    printf("enter the factorial of a number \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    
    }
    printf("the factorial of number is = %d",fact);
    return 0;
}