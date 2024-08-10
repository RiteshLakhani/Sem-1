#include<stdio.h>
int main(){
	int h[5],w[5],i,count=0;
	for(i=0;i<5;i++){
		printf("Enter height :");
		scanf("%d",&h[i]);
		printf("Enter weight :");
		scanf("%d",&w[i]);
	}
	for(i=0;i<5;i++){
	   if(h[i]>=170 && w[i]<50){
	   	count++;
	   }
	}
		printf("Number of people with height more than 170 and weight less than 50kg is %d \n",count);
	return 0;
}
