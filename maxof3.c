#include<stdio.h>
int main()
    {
        int a,b,c;
        printf("enter the value of a \n");
        scanf("%d",&a);
        printf("enter the value of b \n");
        scanf("%d",&b);
        printf("enter the value of c \n");
        scanf("%d",&c);
        if(a>b && a>c)
            printf("%d is the maximum \n ", a);

        else if (b>c && b>a)
        
            printf("%d is the maximum \n",b);
    
        else
            printf("%d is the maximum \n", c);

    }