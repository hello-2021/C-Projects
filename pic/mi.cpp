#include<stdio.h>
#include<windows.h>

int x,n;
int mi(int x,int n);

int main(){
	printf("x=");
	scanf("%d",&x);
	printf("\nn=");
	scanf("%d",&n);
	int out = mi(x,n);
	printf("%d",out);
	system("pause");
}

int mi(int x,int n){
	n--;
	for(n;n>0;n--){
		x = x*x;
	}
	return x;
}
