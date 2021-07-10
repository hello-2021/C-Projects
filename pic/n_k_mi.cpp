#include<stdio.h>

int n,k;
int f(int n,int k){
	int num,num2=0;
	for(int i = 1;i<=n;i++){
		num = i;
		for(int j = k;j>1;j--){
			num = num * num;
		}
		num2 = num2 + num;
	}
	return num2;
}

int main(){
	scanf("%d %d",&n,&k);
	printf("%d",f(n,k));
}
