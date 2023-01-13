#include <stdio.h>

int main()
{  
 int a[3], b[3], i,j;
   printf("enter elements of first array :\n");
   for(i=0;i<3;i++)
   {
   	scanf("%d",&a[i]);
   }
    printf("enter elements of second array :\n");
    for(i=0;i<3;i++)
    {
    	  scanf("%d",&b[i]);
	}
    int flag;
   for(int i=0;i<3;i++)
   {
   	
   	
    	if(a[i]==b[i])
    	{
    		flag=1;
		}

   
    
   }
    if(flag==1)
    {
    	printf("equal");
	}
	else
	{
		   	 printf("not equal");
	} 
}