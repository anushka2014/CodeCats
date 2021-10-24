#include<stdio.h>
int main()
{
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if(year%4==0)
    printf("it is a leap year %d",year);
    else
    printf("not a leap year\n");
    return 0;

}