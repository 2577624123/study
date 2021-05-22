#include<stdio.h>//一元多项式求导
int main(){
	int a[1010]={0};
	int k,e,count=0;//k为系数，e为指数，count计数不为0的导数项个数
	while(scanf("%d%d",&k,&e) !=EOF){
		a[e]=k;
	} 
	a[0]=0;//零此项求导后为0 
	for(int i=1;i<=1000;i++){
		a[i-1]=a[i]*i;//求导公式
		a[i]=0;//此句不可省
		if(a[i-1]!=0){
			count++;
		} 
		if(count==0){
			printf("0 0");//特判 
		}else{
			for(int i=1000;i>=0;i--){
				if(a[i]!=0){
					printf("%d %d",a[i],i);
					count--;
					if(count!=0)
					{
						printf(" ");
					}
				}
			}
		}
	} 
	return 0;
} 
