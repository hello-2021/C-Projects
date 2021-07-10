#include<stdio.h>
#include<windows.h>

int a,n;
int fun(int a,int n);

int main(){
	scanf("%d %d",&a,&n);
	printf("%d",fun(a,n));
	system("pause");
}

int fun(int a,int n){
	int num = 0,num2 = 1;
	for(n;n>0;n--){
		num = num + a*num2;
		num2 = num2*10+1;
	}
	return num;
}
