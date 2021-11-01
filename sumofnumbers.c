#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("enter the number till which you want the sum \n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    
    printf("the sum of the %d consecutive number is %d",n,sum);

    return 0;
}