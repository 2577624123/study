#include<stdio.h>//���ַ���һ�������� 
int main(){
	int n,i;
	char a;
	int row,col;//���������ε��к��� 
	scanf("%d %c",&n,&a);
	col=n;
	//�ж�����ż������������������������
	if(col%2==0)
	{
		row=col/2;
	 } 
	 else{
	 	row=col/2 +1;
	 }
	 //��һ�� 
	 for(i=0;i<n;i++){
	 	printf("%c",a) ;
	 }
	 printf("\n");
	 //�м伸��
	 for(i=2;i<row;i++)
	 {
	 	printf("%c",a);
	 	for(int j=1;j<col-1;j++)
	 	{
	 		printf(" ");
		 }
		 printf("%c",a);
		 printf("\n");
	  } 
	  //���һ��
	  for(i=0;i<n;i++)
	  {
	  	printf("%c",a);
	   } 
	   return 0;
} 
