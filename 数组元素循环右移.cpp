#include<stdio.h>//数组元素循环右移问题
int main(){
	//第一行输入N M，分别表示有几个整数和向右移多少个位置
	int n,m;
	scanf("%d%d",&n,&m);
	int coust=0;//记录输出个数 
	m=m%n;//修正m，对一个长度为n的序列，右移n位之后的序列和当前序列是相同的 
	//第二行输入n个整数
	int a[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 //直接输入结果，中间过程（如何移动的过程省略）
	 for(int i=n-m;i<n;i++)//输出n-m到n号元素 
	 {
	 	printf("%d",a[i]);
	 	coust++;//已输出的个数加一 
		 if(coust<n)
		 {
		 	printf(" ");//输出的个数小于n，则输出空格 
		  } 
	  } 
	  for(int i=0;i<n-m;i++)//输出0-n-m-1号元素 
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
