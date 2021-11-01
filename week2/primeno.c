#include<stdio.h>
int main()
{
    int flag,n;
    printf("enter the value of  number you want to check\n");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=2;i<=n/2;i++)
        if(n%i==0)
        {
            flag=0;
        }
    }
    if(flag ==0 )
    printf("this is an  not an prime no\n");
    else
    printf("this is  an prime no \n");
    return 0;
}