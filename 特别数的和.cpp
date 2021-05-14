#include<bits/stdc++.h>
 int check(int n)
 {
 	while(n)
 	{
 		int a;
 		a=n%10;
 		n=n/10;
 		if(a==2||a==0||a==1||a==9)
 		{
 			return 1;
		 }
	 }
	 return 0;
 }
int main()
{
	int n;
	scanf("%d",&n);
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		if(check(i))
		{
			sum=sum+i;
		}
	}
	printf("%d",sum);
	return 0;
 } 

