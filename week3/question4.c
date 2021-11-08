#include<stdio.h>
int main()
{
int row,col,trow=9;
	
	for(row=1;row<=trow; row++)
	{
		for(col=1;col<=trow;col++)
		{
		if((row==col) || (row+col==trow+1)) 
		{
		printf("*");
		}
		else
		printf(" ");
		}
	printf("\n");
	}
return 0;
}
