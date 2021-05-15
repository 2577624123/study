#include<stdio.h>//最短路程(节点连成一个圈)
#include<algorithm> 
using namespace std;
#define Max 100005 
int main()
{
	int n;
	scanf("%d",&n);//节点个数
	int dis[Max],A[Max];//dis[i]表示1号节点按顺时针到i号节点顺时针方向的下一个节点的距离 
	int sum=0;//表示一圈的总距离
	for(int i=1;i<=n;i++){
		scanf("%d",&A[i]);//A[i]存放i号节点到i+1号节点的距离 
		sum+=A[i];
		dis[i]=sum; 
	} 
	int query;
	int left,right;
	scanf("%d",&query);//输入query个查询
	for(int i=1;i<=query;i++){
		scanf("%d %d",&left,&right);//表示从节点left到节点right 
		if(left>right){
			swap(left,right);
		}
		int temp=dis[right-1]-dis[left-1];//此处-1是由dis[i]的定义决定的 
		printf("%d\n",min(temp,sum-temp));
	} 
	return 0;
	
	 
 } 
