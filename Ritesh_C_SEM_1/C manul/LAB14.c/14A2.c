#include<stdio.h>
int main(){
	int n,pos=0,neg=0;
	printf("Enter length :");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>=0){
			pos=pos+1;
		}
		else{
			neg=neg+1;
		}
	}
		printf("Number of positive number is %d \n",pos);
		printf("Number of negative number is %d",neg);
	return 0;
}
