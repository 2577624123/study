#include<stdio.h>//��������ʱ�����   CLK_TCK Ϊ����ʱ��ÿ�������߹���ʱ�Ӵ���� �ڴ���Ϊ 100
int main(){
	int m,n;
	//�����ʼֵ�����ʱ��ֵ
	scanf("%d%d",&m,&n);
	int ans;
	ans=n-m;
	if(ans%100>=50){
		ans=ans/100+1;
	} 
	else{
		ans=ans/100;
	}
	int hh=ans/3600;
	int r=ans%3600;
	int mm=r/60;
	int ss=r%60;
	printf("%02d:%02d:%02d",hh,mm,ss);
	return 0;
} 
