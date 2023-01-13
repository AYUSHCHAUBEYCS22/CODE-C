#include<stdio.h>
float area(float);
int main()
{
	float r,a;
	printf("enter the radius of the circle: 
	");
	scanf("%f",&r);
	a=area(r);
	printf("\n area of the circle is %f",a);
	return (0);
}
float area(float r)
{
	float a;
	a=3.14*r*r;
	return a;
}