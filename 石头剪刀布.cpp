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
	int n;
	scanf("%d",&n);
	char c1,c2;
	int timeA[3]={0},timeB[3]={0};//��¼���Ҹ���Ӯ,ƽ����Ĵ��� 
	//��¼���ҷֱ�ʲô����Ӯ�� 
	int A[3]={0};
	int B[3]={0};
	char map[3]={'B','C','J'};//���ֵ�˳�� 
	for(int i=0;i<n;i++){
		getchar();//���ջ����ַ� 
		scanf("%c %c",&c1,&c2); //c1Ϊ�׳������ƣ�c2Ϊ�ҳ�������  ע���м��пո� 
		int k1,k2;
		k1=change(c1);
		k2=change(c2);
		if((k1+1)%3==k2){
			//��Ӯ 
			timeA[0]++;//Ӯ�Ĵ���+1 
			timeB[2]++;//��Ĵ���+1 
			A[k1]++;//��¼Ӯ������ 
		}
		if((k2+1)%3==k1){
			//��Ӯ 
			timeB[0]++;
			timeA[2]++;
			B[k2]++;
		}
		if(k1==k2){//ƽ��
			 timeA[1]++; 
			 timeB[1]++;		
		} 
	}
	printf("�׵�ʤ ƽ ������:\n");
	printf("%d %d %d\n",timeA[0],timeA[1],timeA[2]);
	printf("�ҵ�ʤ ƽ ������:\n"); 
	printf("%d %d %d\n",timeB[0],timeB[1],timeB[2]);
	int id1=0,id2=0;
	for(int i=0;i<3;i++)
	{
		if(A[i]>A[id1])//�ж�ʲô����Ӯ�Ĵ������ 
		{
			id1=i;
		}
		if(B[i]>B[id2])
		{
			id2=i;
		}
	}
	printf("�� �ҷֱ�ʲô����Ӯ�Ĵ�����ࣺ\n");
	printf("%c %c\n",map[id1],map[id2]);//map[i],�ַ����ַ��� 
	return 0;
} 
