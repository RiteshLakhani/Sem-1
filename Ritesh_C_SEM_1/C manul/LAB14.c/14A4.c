#include<stdio.h>
int main(){
	int n,max,min,sum=0;
	float avg;
	printf("Enter length :");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
	sum=sum+a[i];
	 if(max<a[i]){
	 	max=a[i];
	 }
	 if(min>a[i]){
	 	min=a[i];
	 }
	}
	avg=sum/n;
	printf("largest Number is %d \n",max);
	printf("Smallest Number is %d",min);
	printf("Sum is :%d",sum);
	printf("Average is %f",avg);
	return 0;
}
