#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;

    for(i=5 ; i>0 ;i--)
		{
			for(j=0 ; j<i ;j++)
			{
				printf(" ");
			}
			 for(j=5 ; j>=i ;j--)
			 {
				 printf("%d",j);
			 }
			printf("\n");

		}
    getch();

}
