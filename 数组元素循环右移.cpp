#include<stdio.h>//����Ԫ��ѭ����������
int main(){
	//��һ������N M���ֱ��ʾ�м��������������ƶ��ٸ�λ��
	int n,m;
	scanf("%d%d",&n,&m);
	int coust=0;//��¼������� 
	m=m%n;//����m����һ������Ϊn�����У�����nλ֮������к͵�ǰ��������ͬ�� 
	//�ڶ�������n������
	int a[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 //ֱ�����������м���̣�����ƶ��Ĺ���ʡ�ԣ�
	 for(int i=n-m;i<n;i++)//���n-m��n��Ԫ�� 
	 {
	 	printf("%d",a[i]);
	 	coust++;//������ĸ�����һ 
		 if(coust<n)
		 {
		 	printf(" ");//����ĸ���С��n��������ո� 
		  } 
	  } 
	  for(int i=0;i<n-m;i++)//���0-n-m-1��Ԫ�� 
	  {
	  	printf("%d",a[i]);
	  	coust++;
		 if(coust<n)
		 {
		 	printf(" ");
		  } 
	  }
	  return 0; 
} 
