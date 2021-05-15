#include<stdio.h>//位置变动
#define N 54
int main(){
	int start[N+1],end[N+1],next[N+1];//next[]用于存放每个位置上的牌在操作后的位置
	char map[5]={'S','H','C','D','J'};//牌的编号与花色的对应关系
	int K;
	scanf("%d",&K); 
	for(int i=1;i<=N;i++){//初始化牌的编号，建议i从1开始 
		start[i]=i;
	} 
	for(int i=1;i<=N;i++)
	{
		scanf("%d",&next[i]);//输入每个位置上的牌在操作后的位置 
	}
	for(int step=0;step<K;step++){
		for(int i=1;i<=N;i++){
			end[next[i]]=start[i];//把第i个位置上的牌的编号存于位置next[i] 
		}
		for(int i=1;i<=N;i++){
			start[i]=end[i];//把end[]赋给start[],以供下次使用 
		}
	} 
	for(int i=1;i<=N;i++){
		if(i!=1){
			printf(" ");//保证空格的输出 
		}
		start[i]--; //位置从0开始，减1使得下标从0开始记录位置 
		printf("%c%d",map[start[i]/13],start[i]%13+1); 
	} 
	return 0;
} 
