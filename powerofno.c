#include<stdio.h>
int main()
{
    int n , p ,num=1;
    printf("enter the value of number \n");
    scanf("%d",&n);
    printf("enter the value for power \n");
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    num=num*n;
    printf("the value of number  %d after power %d is %d",n,p,num);
    return 0;
}