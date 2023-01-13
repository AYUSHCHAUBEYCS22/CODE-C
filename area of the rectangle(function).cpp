#include<stdio.h>
void area()
{
	int l, b, area;
	printf("enter lenth and breadth of rectangle l and b:\n");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("the area of the rectangle is %d\n",area);	
}
  int main()
{
	area();
	area();
}