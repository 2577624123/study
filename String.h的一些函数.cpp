#include<stdio.h>
#include<string.h>
int main(){
	char str1[25]="100555",str2[25];
	int n;
	int m=100;
	sscanf(str1,"%d",&n);
	sprintf(str2,"%d",m);
	printf("%d\n",n);
	printf("%s\n",str2);
	
	/*int cmp;
	gets(str1);
	gets(str2);
	cmp=strcmp(str1,str2);
	printf("%d",strlen(str1));
	printf("%d\n",cmp);*/
	
	
} 
