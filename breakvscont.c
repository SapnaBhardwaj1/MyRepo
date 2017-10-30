#include<stdio.h>
main ()
{
	int i,j;
	
	{
		for(j=1;j<4;j++)
		{
			if(i==j)
				 continue;

			printf("\n%d %d",i,j);
		}
	}
}


