#include<stdio.h>
#include<windows.h>

int min=100000,max=1000000,out=0;
int sushu(int i);

int main(){
	for(int i = min;i<=max;i++){
		printf("%d ",sushu(i));
		out+=sushu(i);
	}
	printf("%d\n",out);
	system("pause");
}

int sushu(int i){
	if(i==1){return 0;}
	for(int j = 2;j < i;j++){
		if(i%j==0){return 0;}
	}
	return i;
}
