#include<stdio.h>
int prime(int n);
int main()
{
	int n;
	printf("enter amy number to check it is prime or not");
	scanf("%d",&n);
	int r=prime(n);
	if(r==2)
	{
		printf("the number is prime number");
	}
	else
	{
		printf("the number is not a prime number");
	}
	return 0;
}
int prime(int n)
{
for(int i=1;i<=n;i++)
if(n%i==0)
count++;
}
return c;
}