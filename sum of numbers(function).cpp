#include<stdio.h>
void sum()
{
	int a, b, sum=0;
	printf("enter two numbers a and b:\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("the sum of two number is %d\n",sum);	
}
 int main()
{
	sum();
	sum();
}