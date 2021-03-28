#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fib(int n)
{
	int F[40],i=1,c;
	F[0]=7;
	F[1]=11;
	if(n==0)
	{
		return F[0];
	}
	else if(n==1)
	{
		return F[1];
	}
	else
	{
		for(i=2;i<=n;i++)
		{
			F[i]=F[i-1]+F[i-2];
		}
		return F[i-1];
	}
	
}

int main() 
{
	int n,sum;
	scanf("%d",&n);
	sum=fib(n);
	printf("%d",sum);
	return 0;
}
