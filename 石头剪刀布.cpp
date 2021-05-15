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
	int n;
	scanf("%d",&n);
	char c1,c2;
	int timeA[3]={0},timeB[3]={0};//记录甲乙各自赢,平，输的次数 
	//记录甲乙分别靠什么手势赢的 
	int A[3]={0};
	int B[3]={0};
	char map[3]={'B','C','J'};//按字典顺序 
	for(int i=0;i<n;i++){
		getchar();//吸收换行字符 
		scanf("%c %c",&c1,&c2); //c1为甲出的手势，c2为乙出的手势  注意中间有空格 
		int k1,k2;
		k1=change(c1);
		k2=change(c2);
		if((k1+1)%3==k2){
			//甲赢 
			timeA[0]++;//赢的次数+1 
			timeB[2]++;//输的次数+1 
			A[k1]++;//记录赢的手势 
		}
		if((k2+1)%3==k1){
			//乙赢 
			timeB[0]++;
			timeA[2]++;
			B[k2]++;
		}
		if(k1==k2){//平手
			 timeA[1]++; 
			 timeB[1]++;		
		} 
	}
	printf("甲的胜 平 负次数:\n");
	printf("%d %d %d\n",timeA[0],timeA[1],timeA[2]);
	printf("乙的胜 平 负次数:\n"); 
	printf("%d %d %d\n",timeB[0],timeB[1],timeB[2]);
	int id1=0,id2=0;
	for(int i=0;i<3;i++)
	{
		if(A[i]>A[id1])//判断什么手势赢的次数最多 
		{
			id1=i;
		}
		if(B[i]>B[id2])
		{
			id2=i;
		}
	}
	printf("甲 乙分别靠什么手势赢的次数最多：\n");
	printf("%c %c\n",map[id1],map[id2]);//map[i],又返回字符串 
	return 0;
} 
