#include<stdio.h>
float avg(int, int, int, int, int)
int main()
{
	int a, b, c, d, e;
	printf("enter 5 numbers:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&c,&d,&e);
	float result=avg(a, b, c, d, e);
	printf("the average of the numbers are:%d",result);
}
