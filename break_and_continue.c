#include<stdio.h>
main ()
{
	int i,j;
	for(i=1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			if(i==j)
				 break;

			printf("\n%d %d",i,j);
		}
	}
}
