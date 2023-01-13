#include<stdio.h>
int main()
{
	int i, j, r, c, a[50][50], b[50][50], flag;
	printf("enter the row and column of first matrix:\n");
	scanf("%d%d",&r,&c);
	printf("enter elements of first matrix:\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("enter the row and column of second matrix:\n");
	scanf("%d%d",&r,&c);
	printf("enter elements of second matrix:\n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
	flag=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]!=b[i][j])
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("\n matrix is an identical matrix");
	}
	else
	{
		printf("\n matrix is not an identical matrix");
	}
}