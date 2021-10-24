
#include<stdio.h>
#include<math.h>
int main()
{
    float a , b, c ,d ,r1,r2 ;
    int k;
    printf("enter the value of a \n");
    scanf("%f",&a);
    printf("enter the value of b\n");
    scanf("%f",&b);
    printf("enter the value of c\n");
    scanf("%f",&c);
    if(a!=0)
    {
        d= b*b - 4*a*c;
        if(d<0)
            k=1;
            else if (d==0)
            k=2;
            else
            k=3;

        
    }
    switch(k)
    {

        case 1:  printf("the roots are complex \n"); break;
        case 2: printf("the roots are equal \n"); break;
        case 3:
         { 
            printf("roots are real and equal\n"); 
            r1= -b + sqrt(d)/2*a ;
            r2= -b - sqrt(d)/2*a;
            printf("the roots are %f,%f20 \n",r1,r2);
        }


    }
    return 0;


}