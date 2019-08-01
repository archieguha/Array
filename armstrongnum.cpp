#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	int i,sum=0,k,g,n;
	int c;


	printf("Enter your limit:");
	scanf("%d",&n);
for(i=1,sum=0;i<=n;i++)
{     

	
        for(k=i;k>0;k=k/10)
		{
			g=k%10;
			sum=sum+(g*g*g);
		}
		
		
		if(sum==i)
		{
			printf(" %d is an armstrong number\n",sum);
		}

	sum=0;	
}
	getch();
	return 0;
}
