#include<stdio.h>//ʱ��ת�� �ұ��κ��˶�ϲ�g�� ���Ҳ����κ��� 
//�ж��Ƿ�������
bool isLeap(int year)//�ж��Ƿ�������ĺ���������bool�� 
{
	return (year%4==0&&year%100!=0)||(year%400==0);
 } 
int main(){
	int time1,time2,yy1,yy2,mouth1,mouth2,day1,day2;
	int a[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};//����ÿ�µõ��������ֱ�Ϊƽ��������ÿ������ 
	int temp;
	scanf("%d%d",&time1,&time2);
	if(time1>time2)//��time1ʼ��С��time2 
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
	while(yy1<yy2||mouth1<mouth2||day1<day2)//time1û�дﵽtime2ʱһֱִ��whileѭ�� 
	{
		day1++;
		if(day1==a[mouth1][isLeap(yy1)]+1){//�ж����ڣ��ﵽ�ı�����ֵΪ1 
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
