#include<stdio.h>
int main()
{
	int n,f=2,i;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%1==0)
		{
			f++;
			break;
		}
	}
	if(f==2)
	printf("it is a prime number");
	else
	printf("not prime");
	return 0;
	
	
}
