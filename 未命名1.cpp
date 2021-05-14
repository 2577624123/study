#include<bits/stdc++.h>
int main()
{
	int a=0,b=0,c=0;
	int y=2019;
	while(y--)
	{
		a++;
		if(a==27)
		{
			a=1;
			b++;
			if(b==27)
			{
				b=1;
				c++;
			}
		}
	}
	printf("%c%c%c\n",c+'A'-1,b+'A'-1,a+'A'-1);
	return 0;
 } 
