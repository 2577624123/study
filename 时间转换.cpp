#include<stdio.h>//时间转换 我比任何人都喜歡你 可我不如任何人 
//判断是否是闰年
bool isLeap(int year)//判断是否是闰年的函数，返回bool型 
{
	return (year%4==0&&year%100!=0)||(year%400==0);
 } 
int main(){
	int time1,time2,yy1,yy2,mouth1,mouth2,day1,day2;
	int a[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};//定义每月得到天数，分别为平年和闰年的每月天数 
	int temp;
	scanf("%d%d",&time1,&time2);
	if(time1>time2)//是time1始终小于time2 
	{
		temp=time1;
		time1=time2;
		time2=temp;
	}
	yy1=time1/10000;
	yy2=time2/10000;
	int m,n;
	m=time1%10000;
	n=time2%10000;
	mouth1=m/100;
	mouth2=n/100;
	day1=m%100;
	day2=n%100;			
	int ans=1;
	while(yy1<yy2||mouth1<mouth2||day1<day2)//time1没有达到time2时一直执行while循环 
	{
		day1++;
		if(day1==a[mouth1][isLeap(yy1)]+1){//判断日期，达到改变日期值为1 
			mouth1=mouth1+1;
			day1=1;
		}
		if(mouth1==13){
			yy1=yy1+1;
			mouth1=1;
		}
		ans++;
	}
	printf("%d\n",ans);
	return 0;
} 
