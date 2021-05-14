//A+B>C问题
#include<stdio.h>
int main() {
	int n,m;
	int k=1;
	//输入的测试样例个数
	scanf("%d",&n); 
	//依次输入ABC
	/*for(int i=1;i<=n;i++){
		long long a,b,c;
		scanf("%ld%ld%ld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%d: true\n",i);
		}
		else
		{
			printf("Case #%d: false\n",i);
		}
	} */
	while(n--)
	{
		long long a,b,c;
		scanf("%ld%ld%ld",&a,&b,&c);
		if(a+b>c){
			printf("Case #%d: true\n",k++);
		}
		else
		{
			printf("Case #%d: false\n",k++);
		}
	 } 
	return 0;
}
