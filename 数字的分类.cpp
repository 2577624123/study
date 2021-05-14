#include<stdio.h>//数字分类
int main(){
	int n;
	int count[5]={0};//存放五类数 的个数 
	int ans[5]={0};//存放五类数字的输出结果 
	int temp; 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp%5==0){//A1类 
			if(temp%2==0)
			{
				ans[0]+=temp;
				count[0]++;
			}
		}
		if(temp%5==1){//A2类 
			if(count[1]%2==0){
				ans[1]+=temp;
			}
			else{
				ans[1]-=temp;
			}
			count[1]++;
		}
		if(temp%5==2)//A3类 
		{
			count[2]++;
		}
		if(temp%5==3){//A4类 
			ans[3]+=temp;
			count[3]++;
		}
		if(temp%5==4){//A5类 
			if(temp>ans[4]){
				ans[4]=temp;
			}
			count[4]++;
		} 
	} 
	if(count[0]==0){
		printf("N ");
	}else{
		printf("%d ",ans[0]);
	}
	if(count[1]==0){
		printf("N ");
	}else{
		printf("%d ",ans[1]);
	}
	if(count[2]==0){
		printf("N ");
	}else{
		printf("%d ",count[2]);//个数 
	}
	if(count[3]==0){
		printf("N ");
	}else{
		printf("%.1f ",(double)ans[3]/count[3]);
	}
	if(count[4]==0){
		printf("N");
	}else{
		printf("%d",ans[4]);
	}
} 
