#include<stdio.h>
int main()
{
    int r,type,n;
    printf("the size of array \n ");
    scanf("%d",&n);
    int a[n];
    printf("enter the array element \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("you want left rotation or right rotation  1=left , 0=right \n");
    scanf("%d",&type);
     printf("how many rotations \n");
    scanf("%d",&r);
    if(type==1)
   {
      
        for(int i=0;i<r;i++)
        {
            int temp =a[0],j;                   
            for(j=0;j<n-1;j++)                                                         
           { 
               a[j]=a[j+1];
           }
           a[j]=temp;
            
        }
   }
    else
   {
       for(int i=0;i<r;i++)
   {

      int last =a[n-1],j;
      for(j=n-1;j>0;j--)
       a[j]=a[j-1];
       a[0]=last;           
                                       
    }
   }

        printf("array rotations \n");
        for(int i=0;i<n;i++)
        printf("%d \t",a[i]);
        return 0;
}


