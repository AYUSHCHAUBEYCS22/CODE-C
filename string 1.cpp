#include<stdio.h>
#include<string.h>
int main()
{
	char a[15],b[15];
	printf("enter 1st word to compare:\n");
	scanf("%s",a);
	printf("enter 2nd word to compare:\n");
	scanf("%s",b);
    int val;
    val=strcmp(a,b);
    if(val==0)
    {
    printf("The words are similar");
    }
    else
    {
	 printf("The words are not similar");
    }
	return 0;
}