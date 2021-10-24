#include<stdio.h>
int main()
{
    double sal, grossal;
    printf("enter the your monthly salary \n");
    scanf("%d",&sal);
    if(sal<=10000)
    {
        grossal= sal+(0.2)*sal+0.8*(sal);
        printf("your gross salary is %lf\n", grossal);

    }
    else if(sal<=20000 && sal>10000)
    {
        grossal= sal+0.25*(sal)+0.9*(sal);
        printf("your gross salary is %lf \n", grossal);

    }
    else
    {
        grossal= sal+ 0.3*(sal)+0.95*(sal);
        printf("your gross salary is %lf\n", grossal);
    }
    return 0;
}
