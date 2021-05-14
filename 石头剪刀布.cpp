#include<stdio.h>//石头剪刀布游戏
int change(char c){
	if(c=='B'){
		return 0;
	}
	if(c=='C'){
		return 1;
	}
	if(c=='J'){
		return 2;
	}
} 
int main(){
	int n,temp;
	char c1,c2;
	int timeA=0,timeB=0;//记录甲乙各自赢的次数 
	int a[3]={0}; 
	char map[3]={'B','C','J'};//按字典顺序 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		getchar();//吸收换行字符 
		scanf("%c%c",&c1,&c2); //c1为甲出的手势，c2为乙出的手势 
		int k1,k2;
		k1=change(c1);
		k2=change(c2);
		if((k1+1)%3==k2){
			//甲赢 
			timeA++;
			a[k1]++;
		}
		if((k2+1)%3==k1){
			//乙赢 
			timeB++;
			a[k2]++;
		} 
	}
} 
