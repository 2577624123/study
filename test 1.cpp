//挖掘机哪家强问题 
#include<stdio.h> 
int main(){
	int const max=100010;
	int shcool[max]={0};
	int scroe,id;
	int n;
	int i;
	//请输入有几家学校参加
	scanf("%d",&n);
	//输入学校代码以及获得的分数
	for(i=0;i<n;i++){
		scanf("%d%d",&id,&scroe);
		shcool[id]+=scroe;
	}
	int Max=-1;
	int k;
	for(i=1;i<=n;i++){
		if(shcool[i]>Max){
			Max=shcool[i];
			k=i;
		}
	}
	printf("%d %d",k,Max);
	return 0;
} 
