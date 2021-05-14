#include<stdio.h>//划拳 
int main(){
	int a,b,c,d;
	//输入划拳的组数
	int n;
	int faila=0,failb=0;
	scanf("%d",&n); 
	for(int i=0;i<n;i++){
		//按甲喊 甲划 乙喊 乙划的格式输入
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b==a+c&&a+c!=d)//甲猜中，乙没有猜中 
		{
			failb++;//乙输 
		}
		if(d==a+c&&a+c!=b){//甲没有猜中，乙猜中了 
			faila++;//甲输 
		}
	}
	printf("%d   %d",faila,failb);
	return 0;		 
} 
