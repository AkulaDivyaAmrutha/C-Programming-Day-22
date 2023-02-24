/* C program to print factors count of a given number*/
#include<stdio.h>
main()
{
	int i,n,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	printf("%d",c);
}
