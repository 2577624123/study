#include<stdio.h>//��ȭ 
int main(){
	int a,b,c,d;
	//���뻮ȭ������
	int n;
	int faila=0,failb=0;
	scanf("%d",&n); 
	for(int i=0;i<n;i++){
		//���׺� �׻� �Һ� �һ��ĸ�ʽ����
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b==a+c&&a+c!=d)//�ײ��У���û�в��� 
		{
			failb++;//���� 
		}
		if(d==a+c&&a+c!=b){//��û�в��У��Ҳ����� 
			faila++;//���� 
		}
	}
	printf("%d   %d",faila,failb);
	return 0;		 
} 
