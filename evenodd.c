

#include<stdio.h>
int main()
{

    int a;
    printf("enter value of a \n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d is a even no \n",a);
    }
    else{
        printf("%d is an odd no \n",a);
    }
    return 0;
}