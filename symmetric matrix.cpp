#include <stdio.h>

int main()
{  
 int r,c,i,j;
   printf("enter number of rows : ");
   scanf("%d",&r);
    printf("enter number of column : ");
   scanf("%d",&c);
   int arr[r][c];
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
	   {
           scanf("%d",&arr[i][j]);
       }
   }
   int xrr[c][r];
   for(int i=0;i<c;i++)
   {
    	for(int j=0;j<r;j++);
		{
    	xrr[i][j]=arr[j][i];
		}
   }
   int flag;
   if(r==c){
   
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++){
       	if(arr[i][j]==xrr[i][j]){
       		flag=0;
       		break;
		   }
		   else{
		   	flag=1;
		   }
           
       }
   }
}
   if(flag==0){
   	printf("\n it is a symmetric matrix");
   }
   else
   {
   	printf("\n it is not a symmetric matrix");
   }
   return 0;
}