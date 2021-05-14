//寻找数字n第一次出现的位置 
#include<stdio.h>
int main(){
	int n,i,x,k;
	int a[100]; 
	//要输入的数字个数
	scanf("%d",&n);
	//输入n个数
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	 }
	 //输入要查找的数x
	scanf("%d",&x);
	//如果找到了则返回下标 
	for(i=0;i<n;i++)
	{
		if(a[i]==x){
			k=i;
			printf("%d",k);
			break; 
		}
	}
	//如果没找到数x则返回-1
		if(k==n){
			printf("-1\n");
		} 

	
	return 0;
} 
