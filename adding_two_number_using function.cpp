#include<stdio.h>
int add(int a, int b);
  
  
int main()
{
int a, b, sum;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	sum=a+b;
	printf("the sum of two number is %d",sum);
}
int add(int a, int b){
	return a+b;
}


