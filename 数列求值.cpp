#include<bits/stdc++.h>
int main()
{
	int i;
	int a=1,b=1,c=1;
	int num;
	for(i=4;i<=20190324;i++)
	{
		num=(a+b+c)%10000;
		a=b;
		b=c;
		c=num;
	 } 
	 printf("%d",num);
	return 0;
 } 
