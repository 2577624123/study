#include<stdio.h>//程序运行时间计算   CLK_TCK 为机器时钟每秒钟所走过的时钟打点数 在此设为 100
int main(){
	int m,n;
	//输入初始值与结束时的值
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
