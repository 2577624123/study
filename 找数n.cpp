//Ѱ������n��һ�γ��ֵ�λ�� 
#include<stdio.h>
int main(){
	int n,i,x,k;
	int a[100]; 
	//Ҫ��������ָ���
	scanf("%d",&n);
	//����n����
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]); 
	 }
	 //����Ҫ���ҵ���x
	scanf("%d",&x);
	//����ҵ����򷵻��±� 
	for(i=0;i<n;i++)
	{
		if(a[i]==x){
			k=i;
			printf("%d",k);
			break; 
		}
	}
	//���û�ҵ���x�򷵻�-1
		if(k==n){
			printf("-1\n");
		} 

	
	return 0;
} 
