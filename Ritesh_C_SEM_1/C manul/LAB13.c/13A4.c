#include<stdio.h>
int main(){
	int n=5,i,j,k;
	for(j=1;j<=n;j++){
		for(i=1;i<=n-j;i++){
		printf(" ");
	}
		for(k=1;k<=j;k++){
  			printf("%d ",k);
		}
		printf("\n");
	}
	return 0;
}
