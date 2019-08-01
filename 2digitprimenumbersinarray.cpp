#include<stdio.h>
int main()
{
	
	int i,j,k=0,c[9],g=0;
	
	for(i=10;i<=99;i++)
	{
		k=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				k++;
			}
		}
		if(k==2)
		{
			c[g]=i;
			g++;
		}
		if(g>9)
		{
			break;
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("%d",c[i]);
		printf(" ");
	}
	printf("\n%d",k);
	return 0;
	
} 
