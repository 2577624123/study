#include<stdio.h>//λ�ñ䶯
#define N 54
int main(){
	int start[N+1],end[N+1],next[N+1];//next[]���ڴ��ÿ��λ���ϵ����ڲ������λ��
	char map[5]={'S','H','C','D','J'};//�Ƶı���뻨ɫ�Ķ�Ӧ��ϵ
	int K;
	scanf("%d",&K); 
	for(int i=1;i<=N;i++){//��ʼ���Ƶı�ţ�����i��1��ʼ 
		start[i]=i;
	} 
	for(int i=1;i<=N;i++)
	{
		scanf("%d",&next[i]);//����ÿ��λ���ϵ����ڲ������λ�� 
	}
	for(int step=0;step<K;step++){
		for(int i=1;i<=N;i++){
			end[next[i]]=start[i];//�ѵ�i��λ���ϵ��Ƶı�Ŵ���λ��next[i] 
		}
		for(int i=1;i<=N;i++){
			start[i]=end[i];//��end[]����start[],�Թ��´�ʹ�� 
		}
	} 
	for(int i=1;i<=N;i++){
		if(i!=1){
			printf(" ");//��֤�ո����� 
		}
		start[i]--; //λ�ô�0��ʼ����1ʹ���±��0��ʼ��¼λ�� 
		printf("%c%d",map[start[i]/13],start[i]%13+1); 
	} 
	return 0;
} 
