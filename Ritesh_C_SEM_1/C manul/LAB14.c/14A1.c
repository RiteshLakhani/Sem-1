#include<stdio.h>
int main(){
	int n;
	printf("Enter length :");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	for(i=n-1;i>=0;i--){
		printf("%d",a[i]);
	}
	return 0;
}
