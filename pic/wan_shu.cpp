#include<stdio.h>
#include<windows.h>

int i=10,z=100;
int is_wanshu(int i);

int main(){
	for(int i = 10;i<=z;i++){
		if(is_wanshu(i)){
			printf("%d\n",i);
		}
	}
	system("pause");
}

int is_wanshu(int i){
	int a=0;
	for(int j = 1;j<=i;++j){
		if(i%j==0){
			a+=j;
		}
	}
	a-=i;
	if(a==i){
		//printf("%d\n",a);
		return 1;
	}
	else return 0;
	a=0;
}
