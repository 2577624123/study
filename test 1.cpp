//�ھ���ļ�ǿ���� 
#include<stdio.h> 
int main(){
	int const max=100010;
	int shcool[max]={0};
	int scroe,id;
	int n;
	int i;
	//�������м���ѧУ�μ�
	scanf("%d",&n);
	//����ѧУ�����Լ���õķ���
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
