#include<stdio.h>//���·��(�ڵ�����һ��Ȧ)
#include<algorithm> 
using namespace std;
#define Max 100005 
int main()
{
	int n;
	scanf("%d",&n);//�ڵ����
	int dis[Max],A[Max];//dis[i]��ʾ1�Žڵ㰴˳ʱ�뵽i�Žڵ�˳ʱ�뷽�����һ���ڵ�ľ��� 
	int sum=0;//��ʾһȦ���ܾ���
	for(int i=1;i<=n;i++){
		scanf("%d",&A[i]);//A[i]���i�Žڵ㵽i+1�Žڵ�ľ��� 
		sum+=A[i];
		dis[i]=sum; 
	} 
	int query;
	int left,right;
	scanf("%d",&query);//����query����ѯ
	for(int i=1;i<=query;i++){
		scanf("%d %d",&left,&right);//��ʾ�ӽڵ�left���ڵ�right 
		if(left>right){
			swap(left,right);
		}
		int temp=dis[right-1]-dis[left-1];//�˴�-1����dis[i]�Ķ�������� 
		printf("%d\n",min(temp,sum-temp));
	} 
	return 0;
	
	 
 } 
