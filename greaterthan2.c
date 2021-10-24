#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a \n");
    scanf("%d",&a);
    printf("enter value of b \n");
    scanf("%d",&b);
    if(a>b)
    {
        printf( "the no %d is greater than %d", a, b);
    }
    else
    {
        printf( "the no %d is greater than %d", b, a);
    }
    return 0;
}
