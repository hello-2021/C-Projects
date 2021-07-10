#include<stdio.h>

int m,n;
long power(int m,int n){
	for(m;m>1;m--){
		n=n*n;
	}
	return n;
}

int main(){
	scanf("%d %d",&m,&n);
	printf("%d",power(m,n));
//	cin >> m >> n;
//	cout << power(m,n);
}
