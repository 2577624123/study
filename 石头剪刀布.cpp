#include<stdio.h>//ʯͷ��������Ϸ
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
	int timeA=0,timeB=0;//��¼���Ҹ���Ӯ�Ĵ��� 
	int a[3]={0}; 
	char map[3]={'B','C','J'};//���ֵ�˳�� 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		getchar();//���ջ����ַ� 
		scanf("%c%c",&c1,&c2); //c1Ϊ�׳������ƣ�c2Ϊ�ҳ������� 
		int k1,k2;
		k1=change(c1);
		k2=change(c2);
		if((k1+1)%3==k2){
			//��Ӯ 
			timeA++;
			a[k1]++;
		}
		if((k2+1)%3==k1){
			//��Ӯ 
			timeB++;
			a[k2]++;
		} 
	}
} 
