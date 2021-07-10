#include<stdio.h>

int fnum[10000];
int n;
int turn = 1;

int main(){
	fnum[0] = 0;fnum[1] = 1;
	while(true){
		scanf("%d",&n);
		if(n<3){printf("%d\n==========\n",fnum[n-1]);}
		else{
			for(int n2 = 2;n2<=n-1;n2++){
				fnum[n2] = fnum[n2-2]+fnum[n2-1];
			}
			printf("%d\n",fnum[n-1]);
			
			printf("==========\n");
		}
	}
}
