#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,c;
	scanf("%d",&n);
	c=a+b;
	printf("%d %d",a,b);
	while(c<n)
	{
	 a=b;
	 b=c;
	 c=a+b;
	 printf(" %d ",c);
	}
}
