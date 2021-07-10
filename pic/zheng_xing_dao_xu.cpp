#include<stdio.h>
#include<windows.h>

int num,a=0;

int main(){
	scanf("%d",&num);
	while(num>0){
		a=a*10+num%10;
		num=num/10;
	}
	printf("%d\n",a);
	system("pause");
}
