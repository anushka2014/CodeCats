#include<stdio.h>
#include<math.h>
int main()
{
    int p,c,b,m,cs, sum, a;
    float per;
    printf("the maximum marks is 100 \n");
    printf("enter the marks obtained in PHYSICS \n");
    scanf("%d",&p);
     printf("enter the marks obtained in CHEMISTRY \n");
    scanf("%d",&c);
     printf("enter the marks obtained in BIOLOGY \n");
    scanf("%d",&b);
     printf("enter the marks obtained in MATHEMATICS \n");
    scanf("%d",&m);
     printf("enter the marks obtained in COMPUTER SCIENCE \n");
    scanf("%d",&cs);
    sum= p+b+c+m+cs;
    per = (sum /500 )* 100;
    printf("the percentage is  %f \n",per);
    if(per >=90)
    printf("YOU HAVE SECURED GRADE A \n");
    else if( per >=80 && per<90)
     printf("YOU HAVE SECURED GRADE B \n");
     else if ( per>=70 && per<80)
      printf("YOU HAVE SECURED GRADE C\n");
      else if ( per>=60 && per<70)
      printf("YOU HAVE SECURED GRADE D\n");
      else if ( per>=40 && per<60)
      printf("YOU HAVE SECURED GRADE E\n");
      else if(per <40)
      printf("YOU HAVE SECURED GRADE F\n");
    return 0;

    


}
