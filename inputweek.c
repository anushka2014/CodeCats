#include<stdio.h>
int main()
{
    int a;
    printf("enter a value of a \n");
    scanf("%d",&a);
    switch(a)
    {
        case 1: printf("this is monday\n"); break;
        case 2: printf(" this is tuesday \n"); break;
        case 3: printf("this is wednesday\n"); break;
        case 4: printf(" this is thursday \n"); break;
        case 5: printf("this is friday\n"); break;
        case 6: printf(" this is saturday \n"); break;
        case 7: printf("this is sunday\n"); break;
        default : printf("invalid day"); break;


    }
    return 0;

}