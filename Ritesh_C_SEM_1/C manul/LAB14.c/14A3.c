#include<stdio.h>
int main(){
	int n,odd=0,even=0;
	printf("Enter length :");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			odd=odd+1;
		}
		else{
			even=even+1;
		}
	}
		printf("Number of odd number is %d \n",odd);
		printf("Number of even number is %d",even);
	return 0;
}
