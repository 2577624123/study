#include<stdio.h>//用字符画一个正方形 
int main(){
	int n,i;
	char a;
	int row,col;//定义正方形的行和列 
	scanf("%d %c",&n,&a);
	col=n;
	//判断列是偶数还是奇数，进行四舍五入
	if(col%2==0)
	{
		row=col/2;
	 } 
	 else{
	 	row=col/2 +1;
	 }
	 //第一行 
	 for(i=0;i<n;i++){
	 	printf("%c",a) ;
	 }
	 printf("\n");
	 //中间几行
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
	  //最后一行
	  for(i=0;i<n;i++)
	  {
	  	printf("%c",a);
	   } 
	   return 0;
} 
