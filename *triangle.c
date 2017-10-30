#include<stdio.h>
main ()
{   int i,j,k;
	for(j=1;j<=5;j++)
	{
		for(i=1;i<=5;i++)
		{
			if(j>=i)
			{
				for(k=1;k<=5;k++)
				{
					if(i<=k)
						printf("*");
				}
				printf("\n");
			}
		}
	}
}
