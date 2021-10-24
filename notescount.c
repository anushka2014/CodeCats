#include<stdio.h>
int main()
{
    int a[10]= {2000,500,200,100,50,20,10,5,2,1};
    int amt, temp;
    printf("enter the amount \n");
    scanf("%d",&amt);
    temp=amt;
    for(int i=0; i<10; i++)
    {
        printf("\n %d paste notes= %d",a[i],temp/a[i]);
        temp= temp%a[i];
    }

return 0;

}