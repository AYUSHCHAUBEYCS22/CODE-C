#include<stdio.h>
int main()
{
	int sum=0, i, j, k, r, c, r1, c1, a[50][50],b[50][50],mul[50][50];
	printf("enter the number of rows of first matrices:");
	scanf("%d",&r);
	printf("enter the number of column of first matrices:");
	scanf("%d",&c);

	printf("enter the number of rows of second matrices:-");
	scanf("%d",&r1);
	printf("enter the number of column of second matrices:-");
	scanf("%d",&c1);
	
	if(c==r1)
	{
			printf("enter your first matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter elements [%d%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter your second matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("enter elements [%d%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	} 
	printf("first matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("second matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	if(c==r1)
	{
    {
    	for(i=0;i<r;i++)
    	{
	    	for(j=0;j<c1;j++)
	    	{
			    for(k=0;k<r;k++)
			    {
			    sum=sum+(a[i][k]*b[k][j]);
			    }
			    mul[i][j]=sum;
		    }
		}
	}
	printf("the multiplication of the matrices is:\n");
		for(i=0;i<r;i++)
    	{
	    	for(j=0;j<c1;j++)
	    	{
	    		printf("%d ",mul[i][j]);
	    	}
	    	printf("\n");
	    }
	}
}
	    else
	{
		printf("matrices cannot be multiplied\n");
    }
	return 0; 
}