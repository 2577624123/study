#include<stdio.h> 
int main(){
	int n,ncase=1;
	scanf("%d",&n);
	while(n--){
		long long a,b,c;
		scanf("%lld%lld%lld",&a,&b,&c);
		long long res=a+b;
		bool falg;
		if(a>0&&b>0&&res<0){//正溢出true 
			falg=true;
		}
		else if(a<0&&b<0&&res>=0){//负溢出 
			falg=false;
		}
		else if(res>c){
			falg=true;
		}
		else{
			falg=false;
		}
		if(falg==true){
			printf("Case #%d: true\n",ncase++);
		}else{
			printf("Case #%d: false\n",ncase++);
		}
	}
	return 0;
}
